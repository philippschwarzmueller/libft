/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:18:37 by pschwarz          #+#    #+#             */
/*   Updated: 2022/10/22 18:36:21 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

void	print_testname(char *name)
{
	printf("\x1b[32m-----TESTING %s-----\x1b[0m\n", name);
}

void	compare_ints(int original, int ft_version)
{
	if (original == ft_version)
	{
		printf("\x1b[32m\xE2\x9C\x93\x1b[0m ");
	}
	else
	{
		printf("\x1b[31m X \x1b[0m ");
	}
}

void	compare_strs(char *original, char *ft_version)
{
	if (strcmp(original, ft_version) == 0)
	{
		printf("\x1b[32m\xE2\x9C\x93\x1b[0m ");
	}
	else
	{
		printf("\x1b[31mX \x1b[0m");
	}
}

void	compare_ptrs(void *original, void *ft_version)
{
	if (original == ft_version)
	{
		printf("\x1b[32m\xE2\x9C\x93\x1b[0m ");
	}
	else
	{
		printf("\x1b[31mX \x1b[0m");
	}
}

void	test_isalpha(void)
{
	print_testname("FT_ISALPHA");
	compare_ints(isalpha(100), ft_isalpha(100));
	compare_ints(isalpha(101), ft_isalpha(101));
	compare_ints(isalpha(132), ft_isalpha(132));
	compare_ints(isalpha(133), ft_isalpha(133));
	compare_ints(isalpha(140), ft_isalpha(140));
	compare_ints(isalpha(141), ft_isalpha(141));
	compare_ints(isalpha(172), ft_isalpha(172));
	compare_ints(isalpha(173), ft_isalpha(173));
	printf("\n");
}

void	test_isdigit(void)
{
	print_testname("FT_ISDIGIT");
	compare_ints(isdigit(-1), ft_isdigit(-1));
	compare_ints(isdigit('0'), ft_isdigit('0'));
	compare_ints(isdigit('5'), ft_isdigit('5'));
	compare_ints(isdigit('9'), ft_isdigit('9'));
	compare_ints(isdigit(40), ft_isdigit(40));
	compare_ints(isdigit('P'), ft_isdigit('P'));
	printf("\n");
}

void	test_isalnum(void)
{
	print_testname("FT_ISALNUM");
	compare_ints(isalnum(-1), ft_isalnum(-1));
	compare_ints(isalnum('0'), ft_isalnum('0'));
	compare_ints(isalnum('5'), ft_isalnum('5'));
	compare_ints(isalnum('9'), ft_isalnum('9'));
	compare_ints(isalnum(40), ft_isalnum(40));
	compare_ints(isalnum('P'), ft_isalnum('P'));
	printf("\n");
}

void	test_isascii(void)
{
	print_testname("FT_ISASCII");
	compare_ints(isascii(-1), ft_isascii(-1));
	compare_ints(isascii(0), ft_isascii(0));
	compare_ints(isascii('!'), ft_isascii('!'));
	compare_ints(isascii('~'), ft_isascii('~'));
	printf("\n");
}

void	test_isprint(void)
{
	print_testname("FT_ISPRINT");
	compare_ints(isprint(-1), ft_isprint(-1));
	compare_ints(isprint(0), ft_isprint(0));
	compare_ints(isprint('!'), ft_isprint('!'));
	compare_ints(isprint('~'), ft_isprint('~'));
	printf("\n");
}

void	test_strlen(void)
{
	print_testname("FT_STRELN");
	char	str1[] = "hello i am a test";
	char	str2[] = "";
	char	str3[] = "                                                        ";
	compare_ints((int) strlen(str1), (int) ft_strlen(str1));
	compare_ints((int) strlen(str2), (int) ft_strlen(str2));
	compare_ints((int) strlen(str3), (int) ft_strlen(str3));
	printf("\n");
}

void	test_memset(void)
{
	print_testname("FT_MEMSET");
	char	teststring[] = "Hello World";
	compare_strs(memset(teststring, 'A', 5), ft_memset(teststring, 'A', 5));
	printf("\n");
}

void	test_bzero(void)
{
	print_testname("FT_BZERO");
	char	bzerotest[] = "Hello World";
	compare_strs(bzero(bzerotest, 1), ft_bzero(bzerotest, 1));
	compare_strs(bzero(bzerotest, 12), ft_bzero(bzerotest, 12));
	printf("\n");
}

void	test_memcpy(void)
{
	print_testname("FT_MEMCPY");
	char	memcpydst[] = "hello world";
	char	memcpydst_ft[] = "hello world";
	char	memcpysrc[] = "DjIwHkO0n&~";
	compare_strs(memcpy(memcpydst, memcpysrc, 12), ft_memcpy(memcpydst_ft, memcpysrc, 12));
	printf("\n");
}

void	test_memmove(void)
{
	print_testname("FT_MEMMOVE");
	char	str[] = "foo-bar";
	compare_strs(memmove(&str[3], &str[4], 4), ft_memmove(&str[3], &str[4], 4));
	printf("\n");
}

void	test_strlcpy(void)
{
	print_testname("TESTING FT_STRLCPY");
	char	dst[5];
	char	ft_dst[5];
	char	string[] = "Test1234";
	compare_ints((int) strlcpy(dst, string, 5), (int) ft_strlcpy(ft_dst, string, 5));
	compare_strs(dst, ft_dst);
	printf("\n");
}

void	test_strlcat(void)
{
	// TODO new test format
	print_testname("TESTING FT_STRLCAT");
	char	str1dst[14] = "Hello";
	char	str1dst_ft[14] = "Hello";
	char	str2src[] = " World!";
	int		returnval = strlcat(str1dst, str2src, 14);
	int		returnval_ft = ft_strlcat(str1dst_ft, str2src, 14);
	compare_ints(returnval, returnval_ft);
	compare_strs(str1dst, str1dst_ft);
	printf("\n");
}

void	test_toupper(void)
{
	print_testname("FT_TOUPPER");
	compare_ints(toupper(97), ft_toupper(97));
	compare_ints(toupper(122), ft_toupper(122));
	compare_ints(toupper(96), ft_toupper(96));
	compare_ints(toupper(123), ft_toupper(123));
	printf("\n");
}

void	test_tolower(void)
{
	print_testname("FT_TOLOWER");
	compare_ints(tolower(65), ft_tolower(65));
	compare_ints(tolower(90), ft_tolower(90));
	compare_ints(tolower(64), ft_tolower(64));
	compare_ints(tolower(91), ft_tolower(91));
	printf("\n");
}

void	test_strchr(void)
{
	print_testname("FT_STRCHR");
	char	test[] = "abcdefg";
	compare_ptrs(strchr(test, 99), ft_strchr(test, 99));
	compare_ptrs(strchr(test, 97), ft_strchr(test, 97));
	compare_ptrs(strchr(test, 122), ft_strchr(test, 122));
	printf("\n");
}

void	test_strrchr(void)
{
	print_testname("FT_STRRCHR");
	char	test[] = "abcdefg";
	compare_ptrs(strrchr(test, 99), ft_strrchr(test, 99));
	compare_ptrs(strrchr(test, 97), ft_strrchr(test, 97));
	compare_ptrs(strrchr(test, 122), ft_strrchr(test, 122));
	printf("\n");
}

void	test_strncmp(void)
{
	print_testname("FT_STRNCMP");
	char	str1[] = "Hello World!";
	char	str2[] = "afllo World!";
	char	str3[] = "xxxxxxxxxxx!";
	char	str4[] = "xxxxxxxxxxxx";
	compare_ints(strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
	compare_ints(strncmp(str1, str3, 12), ft_strncmp(str1, str3, 12));
	compare_ints(strncmp(str1, str4, 12), ft_strncmp(str1, str4, 12));
	compare_ints(strncmp(str1, str4, 0), ft_strncmp(str1, str4, 0));
	printf("\n");
}

void	test_memchr(void)
{
	print_testname("FT_MEMCHR");
	char	test[] = "abcdefg";
	compare_ptrs(memchr(test, 99, strlen(test)), ft_memchr(test, 99, strlen(test)));
	compare_ptrs(memchr(test, 97, strlen(test)), ft_memchr(test, 97, strlen(test)));
	compare_ptrs(memchr(test, 122, strlen(test)), ft_memchr(test, 122, strlen(test)));
	compare_ptrs(memchr(test, 122, 1), ft_memchr(test, 122, 1));
	printf("\n");
}

void	test_memcmp(void)
{
	print_testname("FT_MEMCMP");
	char	str1[] = "Hello World!";
	char	str2[] = "afllo World!";
	char	str3[] = "xxxxxxxxxxx!";
	char	str4[] = "xxxxxxxxxxxx";
	compare_ints(memcmp(str1, str2, 4), ft_memcmp(str1, str2, 4));
	compare_ints(memcmp(str1, str3, 12), ft_memcmp(str1, str3, 12));
	compare_ints(memcmp(str1, str4, 12), ft_memcmp(str1, str4, 12));
	compare_ints(memcmp(str1, str4, 0), ft_memcmp(str1, str4, 0));
	printf("\n");
}

void	test_strnstr(void)
{
	print_testname("FT_STRNSTR");
	char	haystack[] = "I am a haystack, find my needle";
	char	needle[] = "needle";
	char	wrongneedle[] = "spike";
	compare_ptrs(strnstr(haystack, needle, 32), ft_strnstr(haystack, needle, 32));
	compare_ptrs(strnstr(haystack, wrongneedle, 32), ft_strnstr(haystack, wrongneedle, 32));
	compare_ptrs(strnstr(haystack, needle, 2), strnstr(haystack, needle, 2));
	printf("\n");
}

void	test_atoi(void)
{
	print_testname("FT_ATOI");
	compare_ints(atoi("abcde"), ft_atoi("abcde"));
	compare_ints(atoi("++--1"), ft_atoi("++--1"));
	compare_ints(atoi("+-1 "), ft_atoi("+-1 "));
	compare_ints(atoi("-1  "), ft_atoi("-1  "));
	compare_ints(atoi("    2"), ft_atoi("    2"));
	compare_ints(atoi("   -2"), ft_atoi("   -2"));
	compare_ints(atoi("12345"), ft_atoi("12345"));
	compare_ints(atoi("abc12"), ft_atoi("abc12"));
	compare_ints(atoi("\n1"), ft_atoi("\n1"));
	printf("\n");
}

void	test_calloc(void)
{
	print_testname("CALLOC");
	compare_ints(strlen(calloc(12, 4)), strlen(ft_calloc(12, 4)));
	printf("\n");
}

void	test_strdup(void)
{
	print_testname("STRDUP");
	char	test[] = "Hello world!";
	compare_ints(strlen(strdup(test)), strlen(ft_strdup(test)));
	compare_strs(strdup(test), ft_strdup(test));
	printf("\n");
}

int	test_substr(void)
{
	print_testname("SUBSTR");
	char	test[] = "Hello World!";
	printf("Expected: World!, result: %s\n", ft_substr(test, 6, 6));
	return (0);
}

int	test_strjoin(void)
{
	print_testname("STRJOIN");
	printf("Expected: %s, result %s\n", "Hello World!", ft_strjoin("Hello", " World!"));
	return (0);
}

int	test_strtrim(void)
{
	print_testname("STRTRIM");
	printf("Expected: %s, result: %s\n", "World!", ft_strtrim("aHello World! ello", " Hello"));
	return (0);
}

int	test_split(void)
{
	print_testname("SPLIT");
	char	**test = ft_split("AAAAaaAAAA", 'a');
	char	**test2 = ft_split("aAAAaAAAa", 'a');
	int		i;

	i = 0;
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	i = 0;
	while (test[i])
	{
		printf("%s\n", test2[i]);
		i++;
	}
	return (0);
}

/* int	test_itoa(void)
{
	print_testname("ITOA");
	printf("Expected: 111, result: %s\n", ft_itoa(111));
	return (0);
} */

char	test_fun(unsigned int i, char c)
{
	i += 10;
	return (c - 32);
}

int	test_strmapi(void)
{
	print_testname("STRMAPI");
	printf("%s\n", ft_strmapi("test", *test_fun));
	return (0);
}

void	test_fun2(unsigned int i, char *c)
{
	i += 10;
	*c = *c - 32;
}

int	test_striteri(void)
{
	print_testname("STRITERI");
	char	test[] = "test";
	ft_striteri(test, *test_fun2);
	printf("%s\n", test);
	return (0);
}

int	test_putchar_fd(void)
{
	print_testname("PUTCHAR_FD");
	ft_putchar_fd('4', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}

int	test_putstr_fd(void)
{
	print_testname("PUTSTR_FD");
	ft_putstr_fd("Hello world!", 1);
	ft_putchar_fd('\n', 1);
	return (0);
}

int	test_putendl_fd(void)
{
	print_testname("PUTENDL_FD");
	ft_putendl_fd("Hello world!", 1);
	return (0);
}

int	test_putnbr_fd(void)
{
	print_testname("PUTNBR_FD");
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	/* test_itoa(); */
	test_strmapi();
	test_striteri();
	test_putchar_fd();
	test_putstr_fd();
	test_putendl_fd();
	test_putnbr_fd();

	return (0);
}
