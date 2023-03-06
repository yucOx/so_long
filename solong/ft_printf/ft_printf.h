/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin <mehaydin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:20:08 by mehaydin          #+#    #+#             */
/*   Updated: 2023/03/03 01:20:09 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXA_SMALL  "0123456789abcdef"
# define HEXA_BIG  "0123456789ABCDEF"
# define DECI "0123456789"

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	write_hex(unsigned long int nbr, char x);
int	write_dec(long long nbr);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_putchar(char a);
int	ft_format(char a, va_list arg);

#endif
