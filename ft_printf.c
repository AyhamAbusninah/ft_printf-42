/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabusnin <aabusnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:16:27 by aabusnin          #+#    #+#             */
/*   Updated: 2025/10/23 12:07:21 by aabusnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar1(char c)
{
	write(1, &c, 1);
	return (1);
}

/*
** Processes format specifiers and handles corresponding arguments
** Returns the number of characters printed
** Supports: c, s, d, i, u, p, x, X, and % formats
*/
static int	ft_format(char a, va_list args)
{
	int	print_length;

	print_length = 0;
	if (a == 'c')
		print_length += ft_putchar1(va_arg(args, int));
	else if (a == 's')
		print_length += ft_putstr(va_arg(args, char *));
	else if (a == 'd' || a == 'i')
		print_length += ft_putnbr(va_arg(args, int));
	else if (a == 'u')
		print_length += ft_putunbr(va_arg(args, unsigned int));
	else if (a == 'p')
		print_length += ft_putptr(va_arg(args, unsigned long));
	else if (a == 'x')
		print_length += ft_puthex(va_arg(args, unsigned int), 'x');
	else if (a == 'X')
		print_length += ft_puthex(va_arg(args, unsigned int), 'X');
	else if (a == '%')
		print_length += ft_putchar1('%');
	else
	{
		print_length += ft_putchar1('%');
		print_length += ft_putchar1(a);
	}
	return (print_length);
}

/*
** Custom implementation of printf function
** Processes format string and variable arguments
** Returns total number of characters printed
** Returns -1 on NULL format string
*/
int	ft_printf(const char *s, ...)
{
	int		i;
	int		size;
	va_list	args;

	i = 0;
	size = 0;
	if (!s)
		return (-1);
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			size += ft_format(s[i], args);
		}
		else
		{
			size += write(1, &s[i], 1);
		}
		i++;
	}
	va_end(args);
	return (size);
}
