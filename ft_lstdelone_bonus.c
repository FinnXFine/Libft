/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:10:18 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:59:50 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*
void	del(void *content)
{
	free(content);
}

#include <stdio.h>

int main(void)
{
    t_list *head;
    t_list *tmp;

    head = NULL;

    ft_lstadd_front(&head, ft_lstnew(ft_strdup("NODE4")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("NODE3")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("NODE2")));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("NODE1")));

    tmp = head->next;
    ft_lstdelone(head, del);
    head = tmp;

    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    return 0;
}
*/