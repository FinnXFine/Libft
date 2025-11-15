/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 07:39:03 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 18:26:59 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*pstr;

	i = 0;
	pstr = str;
	while (i < n)
	{
		pstr[i] = c;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = "abcdefghi";
    char str2[10] = "abcdefghi";

    // Fill first 5 bytes with 'X' using ft_memset
    ft_memset(str1, 'X', 5);
    printf("ft_memset:  %s\n", str1); // XXXXXfghi

    memset(str2, 'X', 5);
    printf("memset:     %s\n", str2);  // XXXXXfghi
		
    return 0;
}
*/