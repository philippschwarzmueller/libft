/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:46:42 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/04 14:12:26 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
	{
		return (NULL);
	}
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len >= ft_strlen(s + start))
	{
		len = ft_strlen(s + start);
	}
	res = malloc(sizeof(*s) * (len + 1));
	if (!res)
	{
		return (NULL);
	}
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
