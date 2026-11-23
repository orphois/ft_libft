/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoflehn <jhoflehn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 09:38:37 by jhoflehn          #+#    #+#             */
/*   Updated: 2026/10/07 09:38:41 by jhoflehn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static size_t	strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
} */

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_of_dest;
	size_t	len_of_src;

	len_of_dest = ft_strlen(dest);
	len_of_src = ft_strlen(src);
	i = len_of_dest;
	j = 0;
	while (src[j] && i + 1 < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (n > 0)
		dest[i] = '\0';
	if (len_of_dest >= n)
		return (n + len_of_src);
	else
		return (len_of_dest + len_of_src);
}
