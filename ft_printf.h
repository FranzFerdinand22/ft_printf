/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:02:27 by fptacek           #+#    #+#             */
/*   Updated: 2023/02/28 18:37:08 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const	char *format, ...);
int		ft_printf_str(va_list ap);
int		ft_printf_int(va_list ap);
int		ft_printf_char(va_list ap);
int		ft_printf_ptr(va_list ap);
int		ft_printf_undec(va_list ap);
int		ft_printf_hexlow(va_list ap);
int		ft_printf_hexupp(va_list ap);
char	*ft_strrevlow(char *str);
char	*ft_strrevupp(char *str);
char	*ft_strrevptr(char *str);
int		get_int_len(unsigned int value);
char	*ft_undec_itoa(unsigned int i);

#endif
