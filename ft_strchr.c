/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:16:48 by pschwarz          #+#    #+#             */
/*   Updated: 2022/12/08 13:07:53 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	if (!s)
		return (NULL);
	res = (char *) s;
	i = 0;
	while (s[i] != '\0' && s[i] != (char) c)
		i++;
	if (s[i] == (char) c)
		return (res + i);
	return (NULL);
}
