/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:55:27 by pschwarz          #+#    #+#             */
/*   Updated: 2022/12/09 13:27:14 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*write_state(char *state_str, int fd);
static char	*ft_get_line(char *state_str);
static char	*clear_state(char *state_str);
static char	*ft_gnl_strjoin(char *s1, char *s2);

char	*get_next_line(int fd)
{
	char		*res;
	static char	*line_state[MAX_FD];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > MAX_FD)
		return (NULL);
	line_state[fd] = write_state(line_state[fd], fd);
	if (line_state[fd] == NULL)
		return (NULL);
	res = ft_get_line(line_state[fd]);
	line_state[fd] = clear_state(line_state[fd]);
	return (res);
}

static char	*write_state(char *state, int fd)
{
	char	*temp;
	int		bytes_read;

	temp = malloc(BUFFER_SIZE + 1);
	if (!temp)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(state, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(temp);
			free(state);
			return (NULL);
		}
		temp[bytes_read] = '\0';
		state = ft_gnl_strjoin(state, temp);
	}
	free(temp);
	return (state);
}

static char	*ft_get_line(char *state_str)
{
	int		i;
	char	*res;

	i = 0;
	if (!state_str || state_str[0] == '\0')
		return (NULL);
	if (ft_strchr(state_str, '\n'))
		i = ft_strchr(state_str, '\n') - state_str + 1;
	else
		i = ft_strlen(state_str);
	res = malloc(sizeof(char) * i + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, state_str, i);
	res[i] = '\0';
	return (res);
}

static char	*clear_state(char *state_str)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	while (state_str[i] && state_str[i] != '\n')
		i++;
	if (!state_str[i])
		return (free(state_str), NULL);
	res = malloc(sizeof(char) * (ft_strlen(state_str) - i + 1));
	if (!res)
		return (NULL);
	i++;
	while (state_str[i])
		res[j++] = state_str[i++];
	res[j] = '\0';
	free(state_str);
	return (res);
}

static char	*ft_gnl_strjoin(char *s1, char *s2)
{
	char	*res;
	int		s1_len;
	int		s2_len;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = malloc(sizeof(*s1) * (s1_len + s2_len + 1));
	if (!res)
		return (free(s1), NULL);
	ft_memcpy(res, s1, s1_len);
	ft_memcpy(res + s1_len, s2, s2_len);
	res[s1_len + s2_len] = '\0';
	free(s1);
	return (res);
}
