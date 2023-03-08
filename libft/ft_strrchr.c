/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:48:31 by fptacek           #+#    #+#             */
/*   Updated: 2023/01/21 19:03:15 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		l;
	char	*p;

	ch = c;
	l = ft_strlen(s);
	p = (0);
	while (l >= 0)
	{
		if (s[l] == ch)
		{	
			p = (char *)&s[l];
			return (p);
		}
		l--;
	}
	return (NULL);
}
