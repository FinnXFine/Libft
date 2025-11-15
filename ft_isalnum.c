/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:21:47 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 02:42:25 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isalnum('A')); // 1
	printf("%d\n", ft_isalnum('!')); // 0
	printf("%d\n", ft_isalnum('@')); // 0
	printf("%d\n", ft_isalnum('z')); // 1
	return 0;
}
*/