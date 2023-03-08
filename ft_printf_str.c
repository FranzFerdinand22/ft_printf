/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:03:05 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/28 20:13:17 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(va_list ap)
{
	int			res;
	const char	*s;

	s = va_arg (ap, char *);
	if (s == NULL)
	{
		res = write (1, "(null)", 6);
		return (res);
	}
	res = write (1, s, ft_strlen(s));
	return (res);
}
