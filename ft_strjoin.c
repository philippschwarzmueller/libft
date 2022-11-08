/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 08:48:09 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/08 14:56:57 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		s1_len;
	int		s2_len;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = malloc(sizeof(*s1) * (s1_len + s2_len + 1));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, s1_len);
	i = 0;
	while (s2[i] != '\0')
	{
		res[s1_len] = s2[i];
		s1_len++;
		i++;
	}
	res[s1_len] = '\0';
	return (res);
}
