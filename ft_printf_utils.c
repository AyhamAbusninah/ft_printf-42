/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabusnin <aabusnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:25:12 by aabusnin          #+#    #+#             */
/*   Updated: 2025/10/23 12:07:21 by aabusnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Prints a string to standard output
** Returns number of characters printed
** Handles NULL strings by printing "(null)"
*/
int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/*
** Prints a signed number recursively
** Handles negative numbers
** Returns number of characters printed
*/
int	ft_putnbr(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += ft_putchar1('-');
		nb = -nb;
	}
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
	count += ft_putchar1(nb % 10 + '0');
	return (count);
}

/*
** Prints an unsigned number recursively
** Returns number of characters printed
*/
int	ft_putunbr(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_putunbr(nb / 10);
	count += ft_putchar1(nb % 10 + '0');
	return (count);
}
