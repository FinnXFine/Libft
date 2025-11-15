/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:49:27 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 17:05:29 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int		i;
	unsigned int		len;
	char				*cpy;

	len = ft_strlen(s);
	cpy = malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/*
#include <stdio.h>

int main(void)
{
    const char *str = "Hello World";
    
    char *dup = ft_strdup(str);
    if (dup)
    {
        printf("dup: %s\n", dup); // "Hello World"
        free(dup);
    }
    return 0;
}
*/