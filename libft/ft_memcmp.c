/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:03:01 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/01 20:45:11 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*d;

	i = 0;
	p = (unsigned char *)s1;
	d = (unsigned char *)s2;
	while (i < n)
	{
		if (p[i] < d[i])
			return (-1);
		else if (p[i] > d[i])
			return (1);
		i++;
	}
	return (0);
}
