/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:18:37 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/12 10:27:40 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	print_testname(char *name)
{
	printf("\x1b[32m");
	printf("-----TESTING %s-----\x1b[0m\n", name);
	return (0);
}

int	test_isalpha(void)
{
	print_testname("TESTING FT_ISALPHA");
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

int	test_isdigit(void)
{
	print_testname("TESTING FT_ISDIGIT");
	printf("Testing -1, expected %i, result %i\n", isdigit(-1), ft_isdigit(-1));
	printf("Testing 0, expected %i, result %i\n", isdigit('0'), ft_isdigit('0'));
	printf("Testing 5, expected %i, result %i\n", isdigit('5'), ft_isdigit('5'));
	printf("Testing 9, expected %i, result %i\n", isdigit('9'), ft_isdigit('9'));
	printf("Testing ,, expected %i, result %i\n", isdigit(40), ft_isdigit(40));
	printf("Testing P, expected %i, result %i\n", isdigit('P'), ft_isdigit('P'));
	return (0);
}

int	test_isalnum(void)
{
	print_testname("TESTING FT_ISALNUM");
	printf("Testing -1, expected %i, result %i\n", isalnum(-1), ft_isalnum(-1));
	printf("Testing 0, expected %i, result %i\n", isalnum('0'), ft_isalnum('0'));
	printf("Testing 5, expected %i, result %i\n", isalnum('5'), ft_isalnum('5'));
	printf("Testing 9, expected %i, result %i\n", isalnum('9'), ft_isalnum('9'));
	printf("Testing ,, expected %i, result %i\n", isalnum(40), ft_isalnum(40));
	printf("Testing P, expected %i, result %i\n", isalnum('P'), ft_isalnum('P'));
	return (0);
}

int	test_isascii(void)
{
	print_testname("TESTING FT_ISASCII");
	printf("Testing -1, expected %i, result %i\n", isascii(-1), ft_isascii(-1));
	printf("Testing 0, expected %i, result %i\n", isascii(0), ft_isascii(0));
	printf("Testing !, expected %i, result %i\n", isascii('!'), ft_isascii('!'));
	printf("Testing ~, expected %i, result %i\n", isascii('~'), ft_isascii('~'));
	return (0);
}

int	test_isprint(void)
{
	print_testname("TESTING FT_ISPRINT");
	printf("Testing -1, expected %i, result %i\n", isprint(-1), ft_isprint(-1));
	printf("Testing 0, expected %i, result %i\n", isprint(0), ft_isprint(0));
	printf("Testing !, expected %i, result %i\n", isprint('!'), ft_isprint('!'));
	printf("Testing ~, expected %i, result %i\n", isprint('~'), ft_isprint('~'));
	return (0);
}

int	test_memset(void)
{
	print_testname("TESTING FT_MEMSET");
	char	teststring[] = "Hello World";
	printf("Testing Hello World with 'A', expected %s, result %s\n", memset(teststring, 'A', 5), ft_memset(teststring, 'A', 5));
	return (0);
}

int	test_bzero(void)
{
	print_testname("TESTING FT_BZERO");
	char	bzerotest[] = "Hello World";
	printf("Testing Hello World, expected %s, result %s\n", bzero(bzerotest, 1), ft_bzero(bzerotest, 1));
	printf("Testing Hello World, expected %s, result %s\n", bzero(bzerotest, 12), ft_bzero(bzerotest, 12));
	return (0);
}

int	test_memcpy(void)
{
	print_testname("TESTING FT_MEMCPY");
	char	memcpydst[] = "hello world";
	char	memcpysrc[] = "Hello World";
	printf("Testing hello world and Hello World, expected %s, result %s\n", memcpy(memcpydst, memcpysrc, 12), ft_memcpy(memcpydst, memcpysrc, 12));
	return (0);
}

int	test_memmove(void)
{
	print_testname("TESTING FT_MEMMOVE");
	char	str[] = "foo-bar";
	printf("Memcpy: %s; Memmove: %s\n", memcpy(&str[3], &str[4], 4), memmove(&str[3], &str[4], 4));
	//doing the same thing, might be because gcc handles it (See comment here: https://stackoverflow.com/a/1201343/13771267)
	return (0);
}

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();

	return (0);
}
