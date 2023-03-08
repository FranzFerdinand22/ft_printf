/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:12:52 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/28 20:08:34 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(va_list ap)
{
	int		res;
	int		i;
	char	*s;

	i = va_arg (ap, int);
	s = ft_itoa (i);
	res = write (1, s, ft_strlen(s));
	free(s);
	return (res);
}
