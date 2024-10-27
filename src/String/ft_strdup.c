/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:59:07 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/09/11 13:59:09 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	dup = malloc(sizeof(char) * (len));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, len);
	return (dup);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *original = "Hello, World!";
    char *duplicate;

    duplicate = ft_strdup(original);
    if (!duplicate)
    {
        perror("ft_strdup failed");
        return (1);
    }

    // Print original and duplicated strings
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    // Free the duplicated string
    free(duplicate);

    return (0);
}
*/