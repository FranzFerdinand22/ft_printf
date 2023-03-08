/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexupp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:46:15 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/28 20:07:45 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strrevupp(char *str)
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

int	ft_printf_hexupp(va_list ap)
{
	int					i;
	int					len;
	unsigned int		num;
	char				buff[32];

	len = 0;
	i = 0;
	num = va_arg(ap, unsigned int);
	if (num == 0)
		return (write(1, "0", 1));
	while (num)
	{
		i = num % 16;
		if (i < 10)
			buff[len++] = i + '0';
		else
			buff[len++] = i + 'A' - 10;
		num /= 16;
	}
	buff[len] = '\0';
	ft_strrevupp(buff);
	return (write(1, buff, len));
}
