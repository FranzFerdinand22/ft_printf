/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:08:53 by fptacek           #+#    #+#             */
/*   Updated: 2023/01/25 22:04:29 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

int	sizeofnb(long long n)
{
	int	s;

	s = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		s++;
	}
	while (n > 0)
	{
		n = n / 10;
		s++;
	}
	return (s);
}

char	*ft_myitoa(char *str, long long num, int s)
{
	int		i;

	i = 0;
	if (num == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}
	else if (num < 0)
	{
		str[i] = '-';
		num *= -1;
	}
	str[s] = '\0';
	while (num > 0)
	{
		str [s - 1] = (num % 10) + 48;
		num = num / 10;
		s--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			s;
	long long	num;

	num = (long long)n;
	s = sizeofnb(num);
	str = (char *)malloc(sizeof(char) * (s + 1));
	if (str == NULL)
		return (NULL);
	return (ft_myitoa(str, num, s));
}
