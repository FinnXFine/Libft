/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:06:07 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 15:52:24 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	unsigned int		len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = num_len(n);
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	res[size] = '\0';
	while (n)
	{
		size--;
		res[size] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(123456789));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-99999));
	printf("%s\n", ft_itoa(1));
	return (0);
}
*/