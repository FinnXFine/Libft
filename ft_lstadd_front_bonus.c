/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:26:24 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 18:50:01 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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

    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node3")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node2")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node1")));
	
    printf("List after adding to front:\n");
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