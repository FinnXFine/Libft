/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:31:23 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:07:20 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int		i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    const char *str = "Hello World";

    printf("1: %s\n", ft_strchr(str, 'H')); // "Hello World"
    printf("2: %s\n", ft_strchr(str, 'o')); // "o World" (first 'o')
    printf("3: %s\n", ft_strchr(str, 'W')); // "World"
    printf("4: %s\n", ft_strchr(str, 'z')); // (null) → not found

    return 0;
}
*/