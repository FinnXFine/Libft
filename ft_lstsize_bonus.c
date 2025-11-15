/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:35:12 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:38:32 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head = NULL;

	ft_lstadd_front(&head, ft_lstnew("Node3"));
	ft_lstadd_front(&head, ft_lstnew("Node2"));
	ft_lstadd_front(&head, ft_lstnew("Node1"));
	ft_lstadd_front(&head, ft_lstnew("Node0"));

	printf("%d\n", ft_lstsize(head));
}
*/