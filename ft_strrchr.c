/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:32:02 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 14:57:16 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen(str);
	i = 0;
	while (i <= slen)
	{
		if (str[slen - i] == (char)c)
			return ((char *)&str[slen - i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	const char *str = "Hello World";

    printf("1. Last 'o'   > %s\n", ft_strrchr(str, 'o'));
    printf("2. Last 'l'   > %s\n", ft_strrchr(str, 'l'));
    printf("3. Last 'H'   > %s\n", ft_strrchr(str, 'H'));
    return 0;
}
*/