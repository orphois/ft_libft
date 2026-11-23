/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoflehn <jhoflehn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:51:32 by jhoflehn          #+#    #+#             */
/*   Updated: 2026/10/12 16:51:34 by jhoflehn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
} */

static char	*ft_copyfirst(char *result, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	len = ft_strlen(s1);
	j = len;
	len += ft_strlen(s2);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result = ft_copyfirst(result, s1);
	while (s2[i])
	{
		result[j] = s2[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
