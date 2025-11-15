/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:28:23 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 01:41:05 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdio.h>

int main(void)
{
    printf("%c\n", ft_tolower('A'));
    printf("%c\n", ft_tolower('B'));
    printf("%c\n", ft_tolower('C'));
    printf("%c\n", ft_tolower('D'));
    return 0;
}
*/