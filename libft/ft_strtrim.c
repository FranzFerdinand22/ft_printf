/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:18:08 by fptacek           #+#    #+#             */
/*   Updated: 2023/01/23 22:09:38 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*r;
	char	*trim;
	size_t	f;
	size_t	b;

	f = 0;
	b = ft_strlen(s1);
	s = (char *)s1;
	r = (char *)set;
	if (!s1 || !*s1)
		return (ft_strdup(""));
	while (s[f] && ft_strchr(r, s[f]))
		f++;
	while (s[b - 1] && ft_strchr(r, s[b - 1]) && b > f)
		b--;
	trim = (char *)malloc((b - f + 1) * sizeof(char));
	if (trim)
	{
		ft_strlcpy(trim, &s[f], b - f + 1);
		trim[b - f] = '\0';
	}
	return (trim);
}
