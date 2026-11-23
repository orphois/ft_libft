/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoflehn <jhoflehn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:22:05 by jhoflehn          #+#    #+#             */
/*   Updated: 2026/10/19 16:22:06 by jhoflehn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*successor;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		successor = current->next;
		del(current->content);
		free(current);
		current = successor;
	}
	*lst = NULL;
}
