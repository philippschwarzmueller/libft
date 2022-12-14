/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:02:23 by pschwarz          #+#    #+#             */
/*   Updated: 2022/12/08 14:09:46 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(char const *s, char c);
static char	**write_strings(char const *s, char c, char **res);
static char	**free_allocation(char **res, int curr_start);

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (!res)
		return (NULL);
	res = write_strings(s, c, res);
	return (res);
}

static int	count_strings(char const *s, char c)
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
				i++;
		}
	}
	return (res);
}

static char	**write_strings(char const *s, char c, char **res)
{
	char	*temp;
	int		i;
	int		curr_start;

	curr_start = 0;
	while (*s != '\0')
	{
		i = 0;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i)
		{
			temp = ft_calloc(i + 1, sizeof(char));
			if (!temp)
				return (free_allocation(res, curr_start));
			res[curr_start++] = ft_memcpy(temp, s, i);
			s = s + i;
		}
		else
			s++;
	}
	res[curr_start] = NULL;
	return (res);
}

static char	**free_allocation(char **res, int curr_start)
{
	curr_start--;
	while (curr_start >= 0)
	{
		free(res[curr_start]);
		curr_start--;
	}
	free(res);
	return (NULL);
}
