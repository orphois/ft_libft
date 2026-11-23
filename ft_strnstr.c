/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoflehn <jhoflehn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:28:31 by jhoflehn          #+#    #+#             */
/*   Updated: 2026/10/07 16:28:35 by jhoflehn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (small[i] == '\0')
		return ((char *)big);
	while (big[i] && i < n)
	{
		if (big[i] == small[j])
		{
			while (i < n && big[i] && small[j] && big[i] == small[j])
			{
				i++;
				j++;
			}
			if (small[j] == '\0')
				return ((char *)&big[i - j]);
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}
