/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoflehn <jhoflehn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 10:13:01 by jhoflehn          #+#    #+#             */
/*   Updated: 2026/10/12 10:13:03 by jhoflehn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* static void	ft_bzero(void *ptr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)ptr)[i] = '\0';
		i++;
	}
}
 */
void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size != 0 && n > SIZE_MAX / size)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptr = malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (n * size));
	return (ptr);
}
