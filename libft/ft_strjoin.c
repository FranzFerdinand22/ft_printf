/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:32:58 by fptacek           #+#    #+#             */
/*   Updated: 2023/01/23 20:16:15 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	char	*f;
	char	*l;
	int		i;
	int		j;

	i = 0;
	j = 0;
	f = (char *)s1;
	l = (char *)s2;
	join = (char *)malloc(((ft_strlen(f) + ft_strlen(l)) + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	while (f[i])
	{
		join[i] = f[i];
		i++;
	}
	while (l[j])
	{
		join[i + j] = l[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}
