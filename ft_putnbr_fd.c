/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:18:24 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 14:39:54 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{	
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}

/*
int	main(void)
{
	ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(42, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(-42, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(2147483647, 1); // INT_MAX
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(-2147483648, 1); // INT_MIN
    ft_putchar_fd('\n', 1);
}
*/