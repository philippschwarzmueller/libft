/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:21:24 by pschwarz          #+#    #+#             */
/*   Updated: 2023/03/02 15:23:47 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_stra(char **stra)
{
	int	i;

	if (stra == NULL)
		return ;
	i = 0;
	while (stra[i] != NULL)
		free(stra[i]);
	free(stra);
	stra = NULL;
}
