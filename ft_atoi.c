/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:06:34 by pschwarz          #+#    #+#             */
/*   Updated: 2022/12/08 14:08:04 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkoffset(const char *str);

int	ft_atoi(const char *str)
{
	int	res;
	int	offset;
	int	i;

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
