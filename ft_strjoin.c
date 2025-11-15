/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:50:32 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 16:13:27 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*joined;
	unsigned int		i;
	unsigned int		j;
	size_t				total;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	total = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * total + 1);
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}

/*
#include <stdio.h>

int main(void)
{
    char *s;

    // Normal join
    s = ft_strjoin("Hello", "World");
    if (s)
    {
        printf("Joined: %s\n", s); // HelloWorld
        free(s);
    }

    // With empty string
    s = ft_strjoin("", "Test");
    if (s)
    {
        printf("Joined: %s\n", s); // Test
        free(s);
    }

    s = ft_strjoin("Test", "");
    if (s)
    {
        printf("Joined: %s\n", s); // Test
        free(s);
    }

    // Both empty
    s = ft_strjoin("", "");
    if (s)
    {
        printf("Joined: %s\n", s); // ''
        free(s);
    }

    return 0;
}
*/