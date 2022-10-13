/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:45:59 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/13 17:10:12 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
unsigned int	ft_strlen(const char *s);
void			*ft_memset(void *b, int c, int len);
void			*ft_bzero(void *s, int n);
void			*ft_memcpy(void *dst, const void *src, int n);
void			*ft_memmove(void *dst, const void *src, int len);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);

#endif
