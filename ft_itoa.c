/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:29:10 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/05 15:00:34 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n);

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	size_t	len;

	nb = n;
	len = num_len(nb);
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

static int	num_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
