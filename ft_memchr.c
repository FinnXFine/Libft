/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:15:14 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:36:47 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int				i;
	const unsigned char			*p;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    char str[] = "Hello World";
	
    char *p1 = ft_memchr(str, 'o', 11);
    printf("1: %s\n", p1); // "o World"

    char *p2 = ft_memchr(str, 'H', 11);
    printf("2: %s\n", p2); // "Hello World"

    char *p4 = ft_memchr(str, 'W', 5);
    printf("4: %p\n", p4); // (nil)

    return 0;
}
*/