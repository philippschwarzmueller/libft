/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:06:09 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/08 15:52:03 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*to_clear;

	if (!lst || !del)
		return ;
	if (!*lst)
		return ;
	current = *lst;
	while (current)
	{
		del(current->content);
		to_clear = current;
		current = current->next;
		free(to_clear);
	}
	*lst = NULL;
}
