/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:49:14 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/28 14:22:02 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}

/*
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_strncmp("Hello", "Hello", 5));   // 0 → equal
    printf("%d\n", ft_strncmp("Hello", "Hell", 5));    // 'o' - '\0' → positive
    printf("%d\n", ft_strncmp("Hell", "Hello", 5));    // '\0' - 'o' → negative
    printf("%d\n", ft_strncmp("abc", "abd", 2));       // 0 → only first 2 chars
    return 0;
}
*/