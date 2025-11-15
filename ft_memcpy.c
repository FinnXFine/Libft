/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 07:59:08 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:37:01 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t							i;
	unsigned char					*pdest;
	const unsigned char				*psrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	pdest = dest;
	psrc = src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[10] = "ABCDEF";
	char	dst[10];

	ft_memcpy(dst, src, 6);
	printf("This is src: %s\n", src);
	printf("This is dst: %s\n", dst);
}
*/