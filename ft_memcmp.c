/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:40:38 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/03 17:59:31 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	if (n != 0)
	{
		while (n != 0)
		{
			if (p1[i] != p2[i])
			{
				return (p1[i] - p2[i]);
			}
			i++;
			n--;
		}
	}
	return (0);
}
