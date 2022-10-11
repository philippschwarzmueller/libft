/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:36:46 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/11 17:35:05 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *b, int c, int len)
{
	int		i;
	char	*temp;

	temp = b;
	i = 0;
	while (i < len)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
