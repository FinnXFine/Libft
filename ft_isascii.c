/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 07:20:37 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 02:45:31 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isascii(97));   // 1
	printf("%d\n", ft_isascii(128));  // 0
	printf("%d\n", ft_isascii(-1));   // 0
	printf("%d\n", ft_isascii(65));   // 1
	return 0;
}
*/