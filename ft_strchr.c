/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoflehn <jhoflehn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:52:57 by jhoflehn          #+#    #+#             */
/*   Updated: 2026/10/08 17:52:59 by jhoflehn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	n;

	n = 0;
	while (str[n] && (unsigned char)str[n] != (unsigned char)ch)
		n++;
	if ((unsigned char)str[n] == (unsigned char)ch)
		return ((char *)&str[n]);
	else
		return (NULL);
}
/*int main (void)
{
	char *c = strchr("egger", 'g');
	printf("%s", c);
}*/