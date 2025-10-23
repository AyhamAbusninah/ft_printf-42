/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabusnin <aabusnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:18:05 by aabusnin          #+#    #+#             */
/*   Updated: 2025/10/23 12:07:21 by aabusnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/* Function to print a string and return its length */
int	ft_putstr(char *str);
/* Function to print hexadecimal numbers with specified case */
int	ft_puthex(unsigned long nb, char type);
/* Function to print unsigned integers */
int	ft_putunbr(unsigned int nb);
/* Function to print integers */
int	ft_putnbr(long nb);
/* Function to print pointer addresses */
int	ft_putptr(unsigned long ptr);
/* Function to print a single character */
int	ft_putchar1(char c);
/* Main printf function - supports c, s, p, d, i, u, x, X, and % formats */
int	ft_printf(const char *s, ...);

#endif