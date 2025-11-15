/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:09:41 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:40:42 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*test;
	test = ft_lstnew("HelloWorldFinn");
	if (test)
	{
		printf("%s\n", (char *)test->content);
		printf("%p\n", (void *)test->next);
	}
	return (0);
}
*/