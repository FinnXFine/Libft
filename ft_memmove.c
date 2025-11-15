/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:14:06 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:16:31 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char				*pdest;
	const unsigned char			*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = dest;
	psrc = src;
	if (dest > src)
	{
		while (n--)
			pdest[n] = psrc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src1[10] = "ABCDEF";
	char	src2[10] = "ABCDEF";

	// OVERLAP
	ft_memcpy(src1 + 2, src1, 6);
	printf("Here it Overlaps: %s\n", src1);
	
	// NO OVERLAP
	ft_memmove(src2 + 2, src2, 6);
	printf("Here it does not: %s\n",src2);
	
}
*/