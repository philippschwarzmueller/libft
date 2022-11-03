/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 08:48:09 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/03 11:49:31 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		s1_len;
	int		s2_len;
	int		i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	// TODO Zero terminate the string, so malloc needs +1
	res = malloc(sizeof(s1) * (s1_len + s2_len));
	i = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		res[s1_len] = s2[i];
		s1_len++;
		i++;
	}
	// TODO Zero terminate the string
	return (res);
}
