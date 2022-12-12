/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:10:58 by pschwarz          #+#    #+#             */
/*   Updated: 2022/12/12 11:57:03 by pschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print_arg(char c, va_list arg);
static int	ft_print_num(long long num, char arg_type);
static int	ft_print_hex(unsigned long long nb, char arg_type);
static int	ft_ptrlen(unsigned long long nb);

int	ft_printf(const char *s, ...)
{
	int		i;
	int		chars_written;
	char	arg_type;
	va_list	arguments;

	i = 0;
	chars_written = 0;
	va_start(arguments, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			arg_type = s[i + 1];
			chars_written += ft_print_arg(arg_type, arguments);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			chars_written++;
		}
		i++;
	}
	va_end(arguments);
	return (chars_written);
}

static int	ft_print_arg(char arg_type, va_list arg)
{
	char				*ptr;
	unsigned long long	num;

	if (arg_type == 'c')
		return (ft_putchar_fd(va_arg(arg, int), 1), 1);
	else if (arg_type == 's')
	{
		ptr = va_arg(arg, char *);
		if (!ptr)
			return (ft_putstr_fd("(null)", 1), 6);
		return (ft_putstr_fd(ptr, 1), ft_strlen(ptr));
	}
	else if (arg_type == 'p' || arg_type == 'x' || arg_type == 'X')
	{
		num = va_arg(arg, unsigned long long);
		return (ft_print_hex(num, arg_type));
	}
	else if (arg_type == 'd' || arg_type == 'i' || arg_type == 'u')
	{
		num = va_arg(arg, int);
		return (ft_print_num(num, arg_type));
	}
	else if (arg_type == '%')
		return (ft_putchar_fd('%', 1), (1));
	return (0);
}

static int	ft_print_num(long long num, char arg_type)
{
	if (arg_type == 'i')
		return (ft_putnbr_fd((int) num, 1), ft_numlen_base(num, 10));
	else if (arg_type == 'u')
		return (ft_putnbr_fd((unsigned int) num, 1),
			ft_numlen_base((unsigned int) num, 10));
	else if (arg_type == 'd')
		return (ft_putnbr_fd(num, 1), ft_numlen_base(num, 10));
	return (0);
}

static int	ft_print_hex(unsigned long long nb, char arg_type)
{
	unsigned long long	num;

	num = nb;
	if (arg_type == 'p')
	{
		if (!num)
			return (ft_putstr_fd("0x0", 1), 3);
		ft_putstr_fd("0x", 1);
		return (ft_puthex_fd(num, 1, 0), ft_ptrlen(num));
	}
	num = (unsigned int) nb;
	if (arg_type == 'X')
		return (ft_puthex_fd(num, 1, 1), ft_numlen_base(num, 16));
	else if (arg_type == 'x')
		return (ft_puthex_fd(num, 1, 0), ft_numlen_base(num, 16));
	return (0);
}

static int	ft_ptrlen(unsigned long long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len++;
	while (nb)
	{
		nb /= 16;
		len++;
	}
	len += 2;
	return (len);
}
