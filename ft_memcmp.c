/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:40:38 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/14 11:14:48 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	// TODO Fix type error
	unsigned char	*p1 = s1;
	unsigned char	*p2 = s2;

	if (n != 0)
	{
		while (n != 0)
		{
			if (p1 != p2)
			{
				return (p1 - p2);
			}
			n--;
		}
	}
	return (0);
}
