/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:29:36 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/03 11:48:36 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	// TODO is strlen(s1) enough? For zero termination at the end this needs +1
	res = malloc(ft_strlen(s1) * sizeof(*s1));
	i = 0;
	if (!res)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	// TODO Zeroterminate the str?
	return (res);
}
