/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:40:16 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/28 13:36:21 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	head = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

/*
#include <stdio.h>

void	*to_upper(void *content)
{
	char	*str = (char *)content;
	char	*new = ft_strdup(str);
	int		i = 0;

	while (new[i])
	{
		if (new[i] >= 'a' && new[i] <= 'z')
			new[i] -= 32;
		i++;
	}
	return (new);
}

void	del(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		ft_putstr_fd((char *)lst->content, 1);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*lst = NULL;
	t_list	*mapped;

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("hello")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("libft")));

	printf("Original list:\n");
	print_list(lst);

	mapped = ft_lstmap(lst, to_upper, del);

	printf("\nMapped (uppercase) list:\n");
	print_list(mapped);

	ft_lstclear(&lst, del);
	ft_lstclear(&mapped, del);

	return (0);
}
*/