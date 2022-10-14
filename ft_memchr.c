/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:54:32 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/14 10:29:36 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *) s;
	while (n && res[i] != (unsigned char) c)
	{
		i++;
		n--;
	}
	if (res[i] == (unsigned char) c)
	{
		return (res + i);
	}
	return (NULL);
}
