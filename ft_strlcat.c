/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:06:03 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/19 17:06:33 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if (j == dstsize)
	{
		return dstsize + j;
	}
	while (src[i] != '\0' && dstsize > 0)
	{
		dst[j] = src[i];
		i++;
		j++;
		dstsize--;
	}
	dst[j] = '\0';
	return (ft_strlen(dst));
}
