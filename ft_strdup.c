/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoflehn <jhoflehn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:45:34 by jhoflehn          #+#    #+#             */
/*   Updated: 2026/10/12 11:45:36 by jhoflehn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*dup;

	i = 0;
	len = ft_strlen(str);
	dup = malloc(len + 1);
	if (dup == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (i <= len)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
