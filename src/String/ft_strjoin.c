/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:59:17 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/09/11 13:59:20 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, len1);
	ft_memcpy(result + len1, s2, len2 + 1);
	return (result);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *str1 = "Hello, ";
    const char *str2 = "World!";
    char *joined;

    joined = ft_strjoin(str1, str2);
    if (!joined)
    {
        perror("ft_strjoin failed");
        return (1);
    }

    // Print the joined string
    printf("Joined string: %s\n", joined);

    // Free the joined string
    free(joined);

    return (0);
}
*/