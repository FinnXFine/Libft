/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:38:58 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 15:17:19 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t				i;
	size_t				j;
	unsigned int		slen;
	unsigned int		dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && j < size - dlen - 1)
	{
		dst[j + i] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dlen + slen);
}

/*
#include <stdio.h>

int main(void)
{
    char buffer[20] = "Hello";

    size_t result = ft_strlcat(buffer, " World", 20);

    printf("Result: %s\n", buffer);
    printf("Return value: %zu\n", result);

    return 0;
}
*/