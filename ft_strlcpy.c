/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:52:32 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 15:24:38 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t				i;
	unsigned int		len;

	i = 0;
	len = ft_strlen(src);
	if (size)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*
#include <stdio.h>

int main(void)
{
    char src[] = "Hello World";
    char dst[20];

    size_t result = ft_strlcpy(dst, src, sizeof(dst));

    printf("Copied string: %s\n", dst);
    printf("Return value: %zu\n", result);

    return 0;
}
*/