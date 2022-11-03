/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:00:58 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/17 14:10:18 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *res;

	// TODO what if count is way too big? count > MAX / size
	res = malloc(count * size);
	if (!res)
	{
		return (NULL);
	}
	ft_bzero(res, count * size);
	return (res);
}
