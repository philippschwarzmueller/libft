/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:29:10 by pschwarz          #+#    #+#             */
/*   Updated: 2022/12/12 11:53:51 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	size_t	len;

	nb = n;
	len = ft_numlen_base(nb, 10);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	res[len--] = '\0';
	while (nb)
	{
		res[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (res);
}
