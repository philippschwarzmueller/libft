/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:02:23 by pschwarz          #+#    #+#             */
/*   Updated: 2022/11/07 13:23:23 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		curr_start;

	i = 0;
	curr_start = 0;
	res = (char **)malloc(sizeof(char *) * (count_splits(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s != 0)
	{
		i = 0;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i)
		{
			res[curr_start++] = ft_memcpy(ft_calloc(i + 1, sizeof(char)), s, i);
			s = s + i;
		}
		else
			s++;
	}
	res[curr_start] = NULL;
	return (res);
}

static int	count_splits(char const *s, char c)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			res++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
	}
	return (res);
}
