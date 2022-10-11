/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:18:37 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/11 15:55:17 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	test_is_alpha(void)
{
	printf("TESTING FT_ISALPHA\n");
	printf("Testing 100, expected %i, result %i\n", isalpha(100), ft_isalpha(100));
	printf("Testing 101, expected %i, result %i\n", isalpha(101), ft_isalpha(101));
	printf("Testing 132, expected %i, result %i\n", isalpha(132), ft_isalpha(132));
	printf("Testing 133, expected %i, result %i\n", isalpha(133), ft_isalpha(133));
	printf("Testing 140, expected %i, result %i\n", isalpha(140), ft_isalpha(140));
	printf("Testing 141, expected %i, result %i\n", isalpha(141), ft_isalpha(141));
	printf("Testing 172, expected %i, result %i\n", isalpha(172), ft_isalpha(172));
	printf("Testing 173, expected %i, result %i\n", isalpha(173), ft_isalpha(173));
	return (0);
}

int	test_is_digit(void)
{
	printf("TESTING FT_ISDIGIT\n");
	printf("Testing -1, expected %i, result %i\n", isdigit(-1), ft_isdigit(-1));
	printf("Testing 0, expected %i, result %i\n", isdigit('0'), ft_isdigit('0'));
	printf("Testing 5, expected %i, result %i\n", isdigit('5'), ft_isdigit('5'));
	printf("Testing 9, expected %i, result %i\n", isdigit('9'), ft_isdigit('9'));
	printf("Testing ,, expected %i, result %i\n", isdigit(40), ft_isdigit(40));
	printf("Testing P, expected %i, result %i\n", isdigit('P'), ft_isdigit('P'));
	return (0);
}

int	test_is_alnum(void)
{
	printf("TESTING FT_ISALNUM\n");
	printf("Testing -1, expected %i, result %i\n", isalnum(-1), ft_isalnum(-1));
	printf("Testing 0, expected %i, result %i\n", isalnum('0'), ft_isalnum('0'));
	printf("Testing 5, expected %i, result %i\n", isalnum('5'), ft_isalnum('5'));
	printf("Testing 9, expected %i, result %i\n", isalnum('9'), ft_isalnum('9'));
	printf("Testing ,, expected %i, result %i\n", isalnum(40), ft_isalnum(40));
	printf("Testing P, expected %i, result %i\n", isalnum('P'), ft_isalnum('P'));
	return (0);
}

int	main(void)
{
	test_is_alpha();
	test_is_digit();
	test_is_alnum();
	return (0);
}
