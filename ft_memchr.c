/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:54:32 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/03 17:41:14 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*res;

	i = 0;
	res = (unsigned char *) s;
	while (n > 0)
	{
		if (res[i] == (unsigned char) c)
		{
			return (res + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
