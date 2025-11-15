/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 07:23:15 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 03:03:28 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_isprint('A'));  // 1
    printf("%d\n", ft_isprint(127));  // 0 (DEL)
    return 0;
}
*/