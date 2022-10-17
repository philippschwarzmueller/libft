/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:46:42 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/17 14:58:06 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;
	int		j;

	res = malloc(sizeof(*s) * ft_strlen(s + start));
	i = start;
	j = 0;
	while (s[i] != '\0')
	{
		res[i] = s[j];
		i++;
		j++;
	}
	return (res);
}
