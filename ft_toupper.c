/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:17:10 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 01:40:36 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdio.h>

int main(void)
{
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_toupper('b'));
    printf("%c\n", ft_toupper('c'));
    printf("%c\n", ft_toupper('d')); 
    return 0;
}
*/