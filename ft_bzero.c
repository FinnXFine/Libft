/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 07:53:20 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/28 14:11:40 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*ss;

	i = 0;
	ss = s;
	while (i < n)
	{
		ss[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
    char str[10] = "abcdefghi";
    int i = 0;

    printf("Before ft_bzero: ");
    while (i < 10)
    {
        printf("%d ", str[i]);
        i++;
    }
    printf("\n");

    // Set first 5 bytes to zero
    ft_bzero(str, 5);

    printf("After ft_bzero:  ");
    i = 0;
    while (i < 10)
    {
        printf("%d ", str[i]);
        i++;
    }
    printf("\n");

    return 0;
}
*/