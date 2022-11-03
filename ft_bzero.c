/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:27:43 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/12 11:11:47 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_bzero(void *s, unsigned int n)
{
	unsigned int i;
	char *temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
	// TODO this function returns void, though i return s
	return (s);
}
