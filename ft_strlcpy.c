/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:59:55 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/12 11:18:34 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;

	i = 0;
	while (i <= dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\n';
	return (i);
}
