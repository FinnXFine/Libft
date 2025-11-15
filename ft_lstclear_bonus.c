/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:24:12 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 18:47:36 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

/*
void del(void *content)
{
    free(content);
}

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

    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node4")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node3")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node2")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node1")));

    printf("Before ft_lstclear:\n");
    print_list(head);

    ft_lstclear(&head, del);
	
	printf("\nList cleared successfully!\n");
    return 0;
}
*/