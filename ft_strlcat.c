/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:06:03 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/13 15:51:45 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	return (ft_strlen((char *) src) + dstsize);
}
