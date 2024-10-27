/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:00:51 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/09/11 14:00:53 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *original = "Hello, Dana";
    char *substring;

    // Test extracting a substring
    substring = ft_substr(original, 7, 4); // Should extract "Dana"
    if (!substring)
    {
        perror("ft_substr failed");
        return (1);
    }

    // Print the original string and the extracted substring
    printf("Original: %s\n", original);
    printf("Substring: %s\n", substring);

    // Free the allocated substring
    free(substring);

    // Test edge case: start beyond string length
    substring = ft_substr(original, 20, 5); // Should return an empty string
    if (!substring)
    {
        perror("ft_substr failed");
        return (1);
    }
    printf("Edge case (start beyond length): '%s'\n", substring);

    // Free the empty substring
    free(substring);

    return (0);
}
*/