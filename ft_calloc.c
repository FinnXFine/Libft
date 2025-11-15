/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:15:16 by rhssayn           #+#    #+#             */
/*   Updated: 2025/10/27 20:01:22 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

/*
#include <stdio.h>

int main(void)
{
    int *arr;
    size_t i = 0;
    size_t n = 5;

    // Allocate memory for 5 ints
    arr = (int *)ft_calloc(n, sizeof(int));
    if (!arr)
        return 1;

    // Print the contents
    printf("Contents of calloced array: ");
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
    free(arr);
	
    return 0;
}
*/