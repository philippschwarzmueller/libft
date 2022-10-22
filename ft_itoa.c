/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:29:10 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/22 19:19:40 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;

	len = n;
	res = malloc(sizeof(char) * len);
	/* while (n != 0)
	{
		n++;
	} */
	return (res);
}
// TODO FIX THIS!!!!!
/*
alloc correct length
go front to back with putting the result of n % 10 at back of res
stop going front to back once 0 % 10 is reached
*/
