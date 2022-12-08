/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:45:32 by pschwarz          #+#    #+#             */
/*   Updated: 2022/12/08 14:10:27 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (!haystack && len == 0)
		return (NULL);
	res = (char *) haystack;
	if (ft_strlen(needle) == 0)
		return (res);
	while (res[i] != '\0' && len >= ft_strlen(needle))
	{
		while (res[i + j] == needle[j] && res[i + j] != '\0')
			j++;
		if (needle[j] == '\0')
			return (res + i);
		i++;
		j = 0;
		len--;
	}
	return (NULL);
}
