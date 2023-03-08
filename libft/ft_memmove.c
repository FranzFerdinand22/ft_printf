/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:31:28 by fptacek           #+#    #+#             */
/*   Updated: 2023/01/20 18:33:27 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)dest;
	s = (char *)src;
	i = n;
	if (d < s)
		return (ft_memcpy(dest, src, n));
	else if (d == s)
		return (dest);
	else
	{
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}		
	}
	return (dest);
}
