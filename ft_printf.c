/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzurita <dzurita@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:46:30 by dzurita           #+#    #+#             */
/*   Updated: 2023/12/21 17:46:44 by dzurita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		check_error;

	va_start (args, format);
	check_error = 0;
	count = 0;
	if (!format)
		return (0);
	while (*format)
	{
		if (*format == '%')
			count += print_list(*(++format), args, &check_error);
		else
			count += ft_putchar(*format, &check_error);
		format++;
		if (check_error == -1)
		{
			va_end (args);
			return (-1);
		}
	}
	va_end (args);
	return (count);
}
