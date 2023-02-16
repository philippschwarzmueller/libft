/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:41:12 by pschwarz          #+#    #+#             */
/*   Updated: 2023/02/16 14:43:19 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkoffset(const char *str);

long	ft_strtol(const char *str)
{
	long	res;
	int		offset;
	int		i;

	res = 0;
	offset = checkoffset(str);
	i = offset;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	if (offset > 0 && str[offset - 1] == '-')
		res *= -1;
	return (res);
}

static int	checkoffset(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	return (i);
}
