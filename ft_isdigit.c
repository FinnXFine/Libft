/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:19:24 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 03:00:25 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_isdigit('0')); // 1
    printf("%d\n", ft_isdigit('a')); // 0
    printf("%d\n", ft_isdigit('!')); // 0
    printf("%d\n", ft_isdigit('5')); // 1
    return 0;
}
*/