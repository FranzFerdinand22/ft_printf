/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_undec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:23:53 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/28 20:16:56 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_int_len(unsigned int i)
{
	int	l;

	l = 0;
	if (i == 0)
		return (1);
	while (i > 0)
	{
		i = i / 10;
		l++;
	}
	return (l);
}

char	*ft_undec_itoa(unsigned int i)
{
	int				j;
	unsigned int	div;
	char			*str;

	j = 0;
	div = 1;
	str = (char *)ft_calloc(sizeof(unsigned int), get_int_len(i) + 1);
	if (str == NULL)
		return (NULL);
	while (i / div >= 10)
		div *= 10;
	while (div > 0)
	{
		str[j] = (i / div) % 10 + '0';
		div /= 10;
		j++;
	}
	return (str);
}

int	ft_printf_undec(va_list ap)
{
	int				res;
	unsigned int	i;
	char			*str;

	i = va_arg(ap, unsigned int);
	str = ft_undec_itoa(i);
	res = write(1, str, ft_strlen (str));
	free (str);
	return (res);
}
