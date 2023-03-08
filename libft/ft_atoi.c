/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:37:09 by fptacek           #+#    #+#             */
/*   Updated: 2023/01/20 18:41:48 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	res;

	i = 0;
	n = 1;
	res = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			n *= -1;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (res > INT_MAX / 10 && (res == INT_MAX && nptr[i] - '0' > 7))
		{
			if (n == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		res = (res * 10) + (nptr[i] - 48);
		i++;
	}
	return (res * n);
}
