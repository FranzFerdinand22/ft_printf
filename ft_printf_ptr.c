/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:29:07 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/28 20:11:27 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strrevptr(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int	ft_printf_ptr(va_list ap)
{
	int			len;
	int			i;
	char		buff[32];
	uintptr_t	p;

	i = 0;
	len = 0;
	p = (uintptr_t) va_arg(ap, void *);
	if (p == 0)
		return (write(1, "(nil)", 5));
	while (p)
	{
		i = p % 16;
		if (i < 10)
			buff[len++] = i + '0';
		else
			buff[len++] = i + 'a' - 10;
		p /= 16;
	}
	buff[len] = '\0';
	ft_strrevptr(buff);
	return (write(1, "0x", 2) + write(1, buff, len));
}
