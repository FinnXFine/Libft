/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:35:13 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 18:41:08 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	upper(void *content)
{
	char *str = (char *)content;
	int	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
}

void 	print_list(void *content)
{
	ft_putstr_fd(content, 1);
	ft_putchar_fd('\n', 1);
}

#include <stdio.h>

int	main(void)
{
	t_list	*head = NULL;

    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node4")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node3")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node2")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node1")));
	
	ft_lstiter(head, upper);
	ft_lstiter(head, print_list);

	t_list *tmp;
    while (head)
    {
        tmp = head->next;
        free(head->content);
        free(head);
        head = tmp;
    }
}
*/