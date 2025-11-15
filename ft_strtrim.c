/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:16:51 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 02:19:32 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	unsigned int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	j = ft_strlen(s1);
	if (!set || !s1)
		return ((char *)s1);
	while (s1[i] && is_set(s1[i], set))
		i++;
	while (j > i && is_set(s1[j - 1], set))
		j--;
	p = ft_substr(s1, i, j - i);
	if (!p)
		return (NULL);
	return (p);
}

/*
#include <stdio.h>

int main(void)
{
    char *s;

    s = ft_strtrim("  Hello World  ", " ");
    printf("%s\n", s); 
	free(s);

    s = ft_strtrim("$$$Trim$$$", "$");
    printf("%s\n", s); 
	free(s);

    s = ft_strtrim("NoTrimNeeded", " ");
    printf("%s\n", s); 
	free(s);

    s = ft_strtrim("*****", "*");
    printf("%s\n", s); 
	free(s);

    return 0;
}
*/