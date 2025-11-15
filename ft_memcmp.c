/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 07:44:04 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:29:33 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t						i;
	const unsigned char			*p1;
	const unsigned char			*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hella";
    char str4[] = "Hellz";

    printf("1: %d\n", ft_memcmp(str1, str2, 5)); // 0

    printf("2: %d\n", ft_memcmp(str1, str3, 5)); // 'o' - 'a' = 14
    printf("3: %d\n", ft_memcmp(str1, str4, 5)); // 'o' - 'z' = negative

    printf("4: %d\n", ft_memcmp(str1, str4, 4)); // 0

    return 0;
}
*/