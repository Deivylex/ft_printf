/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:19:55 by dzurita           #+#    #+#             */
/*   Updated: 2023/11/28 16:42:09 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	print_list(char format, va_list args, int *check_error);

int	ft_print_p(unsigned long nbr, unsigned int base, int *check_error);

int	ft_print_num(long nbr, int base, int upc, int *check_error);

int	ft_putstr(const char *str, int *check_error);

int	ft_putchar(const char c, int *check_error);

int	ft_printf(const char *format, ...);

#endif
