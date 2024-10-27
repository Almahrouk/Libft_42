/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:00:01 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/09/11 14:00:03 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    const char *original = "Hello, World!";
    char *mapped;

    mapped = ft_strmapi(original, to_uppercase);
    if (!mapped)
    {
        perror("ft_strmapi failed");
        return (1);
    }

    // Print the original and mapped strings
    printf("Original: %s\n", original);
    printf("Mapped: %s\n", mapped);

    // Free the mapped string
    free(mapped);

    return (0);
}
*/
