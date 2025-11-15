/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:42:59 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 18:52:22 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
void print_list(t_list *lst)
{
    while (lst)
    {
        ft_putstr_fd((char *)lst->content, 1);
        ft_putchar_fd('\n', 1);
        lst = lst->next;
    }
}

#include <stdio.h>

int main(void)
{
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node1")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node2")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node3")));

    printf("List after adding to back:\n");
    print_list(head);

    t_list *tmp;
    while (head)
    {
        tmp = head->next;
        free(head->content);
        free(head);
        head = tmp;
    }

    return 0;
}
*/