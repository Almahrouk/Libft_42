/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:52:48 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/09/11 13:52:54 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		ncpy;
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ncpy = n;
	if (n < 0)
		ncpy = -n;
	i = int_len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (ncpy == 0)
		str[i] = '0';
	while (ncpy > 0)
	{
		str[i--] = (ncpy % 10) + '0';
		ncpy /= 10;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int numbers[] = {0, 42, -42, 2147483647, -2147483648};
    char *str;
    size_t i;

    for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        str = ft_itoa(numbers[i]);
        if (str == NULL)
        {
            perror("ft_itoa failed");
            return (1);
        }
        printf("ft_itoa(%d) = %s\n", numbers[i], str);
        free(str);
    }

    return (0);
}
*/