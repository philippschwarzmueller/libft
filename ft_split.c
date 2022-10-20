/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:02:23 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/20 10:47:29 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char const *s, char c);
static char	*write_str(char const *src, int *start, char delimiter);

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		len;
	int		curr_start;

	i = 0;
	len = count_splits(s, c);
	curr_start = 0;
	len++;
	res = malloc((sizeof(char *) * len) + 1);
	while (len != 0)
	{
		res[i] = write_str(s, &curr_start, c);
		len--;
		i++;
	}
	res[i] = NULL;
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
		{
			res++;
		}
		i++;
	}
	return (res);
}

static char	*write_str(char const *src, int *start, char delimiter)
{
	char	*new_str;
	int		i;
	int		j;

	i = *start;
	while (src[i] != delimiter)
	{
		i++;
	}
	new_str = malloc(i);
	i = *start;
	j = 0;
	while (src[i] != '\0' && src[i] != delimiter)
	{
		new_str[j] = src[i];
		i++;
		j++;
	}
	*start = i + 1;
	return (new_str);
}
