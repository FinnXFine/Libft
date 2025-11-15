/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:28:17 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 15:55:35 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int		i;
	int					sign;
	int					result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] && str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("    1234"));
	printf("%d\n", ft_atoi("     -3232    "));
	printf("%d\n", ft_atoi(" +1"));
	printf("%d\n", ft_atoi(" 0     "));
}
*/