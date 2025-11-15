/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:00:11 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 19:00:21 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i + j < len)
	{
		while (haystack[i + j] == needle[j] && needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    const char *haystack = "Hello World";
    const char *needle1 = "World";
    const char *needle2 = "Hello";
    const char *needle3 = "o W";
    const char *needle4 = "";

    printf("1: %s\n", ft_strnstr(haystack, needle1, 11)); // "World"
    printf("2: %s\n", ft_strnstr(haystack, needle2, 5));  // "Hello World"
    printf("3: %s\n", ft_strnstr(haystack, needle3, 8));  // "o World"
    printf("5: %s\n", ft_strnstr(haystack, needle4, 11)); // "Hello World"

    return 0;
}
*/