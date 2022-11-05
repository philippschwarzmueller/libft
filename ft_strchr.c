/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:16:48 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/05 15:59:59 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	res = (char *) s;
	i = 0;
	while (s[i] != '\0' && s[i] != (char) c)
	{
		i++;
	}
	if (s[i] == (char) c)
		return (res + i);
	return (NULL);
}
