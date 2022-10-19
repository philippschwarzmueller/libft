/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:33:49 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/19 15:15:42 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	char	*d;
	char	*s;
	char	*d_last;
	char	*s_last;

	d = dst;
	s = src;
	d_last = d + len - 1;
	s_last = s + len - 1;
	if (d < s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		while (len--)
		{
			*d_last-- = *s_last--;
		}
	}
	return (dst);
}
