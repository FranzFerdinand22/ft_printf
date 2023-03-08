/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:08:33 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/05 18:22:36 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;
	size_t	test;

	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = 1;
	}
	test = nelem * elsize;
	if (test / nelem != elsize)
		return (NULL);
	p = (void *)malloc(nelem * elsize);
	if (!p)
		return (NULL);
	if (p)
		ft_bzero(p, nelem * elsize);
	return (p);
}
