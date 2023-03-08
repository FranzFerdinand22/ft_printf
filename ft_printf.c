/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:01:52 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/28 18:31:24 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_what_format(const char *format, va_list ap, int i)
{
	int		res;

	if (format[i] == 'c')
		res = ft_printf_char(ap);
	if (format[i] == 's')
		res = ft_printf_str(ap);
	if (format[i] == 'p')
		res = ft_printf_ptr(ap);
	if (format[i] == 'd' || format[i] == 'i')
		res = ft_printf_int(ap);
	if (format[i] == 'u')
		res = ft_printf_undec(ap);
	if (format[i] == 'x')
		res = ft_printf_hexlow(ap);
	if (format[i] == 'X')
		res = ft_printf_hexupp(ap);
	if (format[i] == '%')
		res = write(1, "%", 1);
	return (res);
}

int	ft_printf(const	char *format, ...)
{
	int		i;
	int		res;
	va_list	ap;

	i = 0;
	res = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			res += ft_what_format(format, ap, i + 1);
			i++;
		}
		else
			res += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (res);
}
