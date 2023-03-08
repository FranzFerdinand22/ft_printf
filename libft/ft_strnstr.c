/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:17:13 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/03 16:19:05 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	litt_len;

	i = 0;
	j = 0;
	litt_len = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	if (big == NULL && litt_len > len && len == 0)
		return (NULL);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (j == litt_len)
				return ((char *)(big + i));
		}
		i++;
		j = 0;
	}
	return (NULL);
}
