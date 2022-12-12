/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:57:43 by pschwarz          #+#    #+#             */
/*   Updated: 2022/12/12 11:58:11 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(unsigned long long nb, int fd, int uppercase)
{
	if (nb > 15)
	{
		ft_puthex_fd(nb / 16, fd, uppercase);
		nb = nb % 16;
	}
	if (nb < 16)
	{
		if (nb >= 0 && nb < 10)
			ft_putchar_fd('0' + nb, fd);
		if (nb > 9)
		{
			if (uppercase)
				ft_putchar_fd(nb + 'A' - 10, fd);
			else if (!uppercase)
				ft_putchar_fd(nb + 'a' - 10, fd);
		}
	}
}
