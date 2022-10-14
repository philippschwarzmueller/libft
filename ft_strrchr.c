/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 08:43:48 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/14 09:03:00 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = ft_strlen(s) - 1;
	res = (char *) s;
	while (s[i] && s[i] != (char) c)
	{
		i--;
	}
	if (s[i] == (char) c)
	{
		return (res + i);
	}
	return (NULL);
}
