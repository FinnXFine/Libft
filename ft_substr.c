/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:20:41 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 02:38:51 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*p;
	size_t				size;
	size_t				slen;
	unsigned int		i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		size = 0;
	else if (slen - start < len)
		size = slen - start;
	else
		size = len;
	p = malloc(size + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
#include <stdio.h>

int main(void)
{
    char *s;

    s = ft_substr("Hello World", 6, 5);
    printf("%s\n", s);
	free(s); // Should print 'World'

    s = ft_substr("Hello World", 0, 5);
    printf("%s\n", s);
	free(s); // Should print 'Hello'

    s = ft_substr("Hello", 2, 10);
    printf("%s\n", s);
	free(s); // Should print 'llo'

    s = ft_substr("Hello", 10, 5);
    printf("%s\n", s);
	free(s); // Should print ''

    return 0;
}
*/