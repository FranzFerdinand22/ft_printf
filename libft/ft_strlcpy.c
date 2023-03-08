/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:58:57 by fptacek           #+#    #+#             */
/*   Updated: 2023/01/20 18:17:57 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <time.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	sizesrc;

	sizesrc = ft_strlen(src);
	if (sizesrc < size)
		ft_memcpy(dest, src, sizesrc + 1);
	else if (size != 0)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size -1] = '\0';
	}
	return (sizesrc);
}
