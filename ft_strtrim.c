/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:07:49 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/18 09:59:32 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_partof(char c, char const *set);

char *ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int i;
	int j;
	int k;

	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while (is_partof(s1[i], set) == 1)
	{
		i++;
	}
	while (is_partof(s1[j], set) == 1)
	{
		j--;
	}
	// TODO is malloc really needed here?
	res = malloc(sizeof(s1) * (j - i));
	while (i <= j)
	{
		res[k] = s1[i];
		i++;
		k++;
	}
	return (res);
}

static int is_partof(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
