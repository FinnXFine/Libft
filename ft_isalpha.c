/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:15:58 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 03:00:42 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isalpha('A')); // Should print 1
	printf("%d\n", ft_isalpha('0')); // Should print 0
	printf("%d\n", ft_isalpha('!')); // Should print 0
	printf("%d\n", ft_isalpha('Z')); // Should print 1
	return 0;
}
*/