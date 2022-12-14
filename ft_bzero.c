/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:27:43 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/03 13:50:55 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*temp;

	i = 0;
	temp = s;
	while (n)
	{
		temp[i] = '\0';
		i++;
		n--;
	}
}
