/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoflehn <jhoflehn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:12:33 by jhoflehn          #+#    #+#             */
/*   Updated: 2026/10/08 17:12:35 by jhoflehn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	while (len >= 0 && (unsigned char)str[len] != ((unsigned char)ch))
		len--;
	if (len == -1)
		return (NULL);
	else
		return ((char *)&str[len]);
}
/*int main (void)
{
	char *c = ft_strrchr("blueballs", 'a');
	printf("%s\n", c);
}*/
