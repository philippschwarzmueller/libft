/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:45:32 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/04 11:29:08 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
	{
		return (haystack);
	}
	while (haystack[i] != '\0' && len >= ft_strlen(needle))
	{
		while (haystack[i + j] == needle[j]
			&& haystack[i + j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i++;
		j = 0;
		len--;
	}
	return (NULL);
}
