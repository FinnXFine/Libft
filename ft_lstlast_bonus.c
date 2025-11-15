/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:10:56 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:42:39 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head = NULL;

	ft_lstadd_front(&head, ft_lstnew("Node 5"));
	ft_lstadd_front(&head, ft_lstnew("Node 4"));
	ft_lstadd_front(&head, ft_lstnew("Node 3"));
	ft_lstadd_front(&head, ft_lstnew("Node 2"));
	ft_lstadd_front(&head, ft_lstnew("Node 1"));
	ft_lstadd_front(&head, ft_lstnew("Node 0"));

	head = ft_lstlast(head);
	printf("%s\n", (char *)head->content);
}
*/