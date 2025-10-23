/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabusnin <aabusnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:56:15 by aabusnin          #+#    #+#             */
/*   Updated: 2025/10/23 12:07:21 by aabusnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Prints a number in hexadecimal format
** 'type' parameter determines case (x/X)
** Returns number of characters printed
*/
int	ft_puthex(unsigned long value, char type)
{
	char	*base;
	int		i;

	i = 0;
	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (value >= 16)
	{
		i += ft_puthex(value / 16, type);
		i += ft_putchar1(base[value % 16]);
	}
	else
		i += ft_putchar1(base[value]);
	return (i);
}

/*
** Prints a pointer address in hex format
** Handles NULL pointers by printing "(nil)"
** Returns number of characters printed
*/
int	ft_putptr(unsigned long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
	{
		i += ft_putstr("(nil)");
		return (i);
	}
	i += write(1, "0x", 2);
	i += ft_puthex(ptr, 'x');
	return (i);
}
