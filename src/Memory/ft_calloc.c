/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:51:06 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/09/11 13:51:09 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    size_t count = 5; // Number of elements
    size_t size = sizeof(int); // Size of each element
    int *arr;
    size_t i;

    arr = (int *)ft_calloc(count, size);
    if (arr == NULL)
    {
        perror("ft_calloc failed");
        return (1);
    }

    // Print the allocated array elements (should all be zero)
    for (i = 0; i < count; i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Free the allocated memory
    free(arr);
    return (0);
}
*/