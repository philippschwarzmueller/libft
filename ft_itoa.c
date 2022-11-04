/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:29:10 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/04 22:09:28 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n);

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	size_t	i;

	len = num_len(n);
	i = 0;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len - 1] = '\0';
	if (n < 0)
		res[i] = '-';
		i++;
	while (len > i)
	{
		if (n < 0)
		{
			res[len] = '0' + n % 10 * (-1);
			n = n / 10;
		}
		else
		{
			res[len] = '0' + n % 10;
			n = n / 10;
		}
		len--;
	}
	return (res);
}

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n >= 0 && n < 10)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
