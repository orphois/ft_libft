/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoflehn <jhoflehn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:53:03 by jhoflehn          #+#    #+#             */
/*   Updated: 2026/10/14 16:53:06 by jhoflehn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_intmin(void)
{
	char	*result;
	size_t	i;

	i = 0;
	result = malloc(sizeof(char) * 12);
	if (!result)
		return (NULL);
	while ("-2147483648"[i])
	{
		result[i] = "-2147483648"[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static char	*ft_number(char *result, int n, size_t place)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n == 0)
		result[0] = '0';
	while (n > 0)
	{
		result[place - 2] = n % 10 + '0';
		n = n / 10;
		place--;
	}
	return (result);
}

static int	ft_count_places(int n)
{
	size_t	place;

	place = 1;
	if (n == 0)
		place++;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		place++;
	}
	return (place);
}

char	*ft_itoa(int n)
{
	size_t	place;
	char	*result;

	if (n == -2147483648)
		return (ft_intmin());
	place = ft_count_places(n);
	if (n < 0)
	{
		place++;
		result = malloc((sizeof(char)) * (place));
		if (!result)
			return (NULL);
		result[0] = '-';
	}
	else
	{
		result = malloc((sizeof(char)) * (place));
		if (!result)
			return (NULL);
	}
	result = ft_number(result, n, place);
	result[place - 1] = '\0';
	return (result);
}

/* int main (void)
{
	char *test = ft_itoa(5);
	printf("%s", test);
} */