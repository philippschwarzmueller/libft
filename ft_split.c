/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:02:23 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/18 11:54:16 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*write_str(char const *src, int *start, char delimiter);

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		len;
	int		curr_start;

	i = 0;
	len = 0;
	curr_start = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			len++;
		}
		i++;
	}
	len++;
	res = malloc((sizeof(char *) * len) + 1);
	i = 0;
	while (len != 0)
	{
		res[i] = write_str(s, &curr_start, c);
		len--;
		i++;
	}
	res[i] = NULL;
	return (res);
}

static char	*write_str(char const *src, int *start, char delimiter)
{
	char	*new_str;
	int		i;
	int		j;

	// TODO fix malloc size
	new_str = malloc(5);
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

// TODO delimiter twice 
// TODO delimiter at front and back

/* static char	*new_str(char const *src, int start, int end)
{
	char	*res;
	int		i;

	res = malloc(sizeof(src) * (end - start));
	i = 0;
	while (start <= end)
	{
		res[i] = src[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
} */


/*
"Hallo Welt, wie geht es dir" delimiter space

Anzahl an return strings bestimmen -> 6
Malloc fuer die Laenge + 1 fuer NULL als RES
NULL Pointer ans Ende packen von RES
Ueber RES iterieren und an jeder Position einen der Return Strings erstellen
	RES[i] = createString(Startpointer, Endbedingung)
	i++
RES returnen
*/
