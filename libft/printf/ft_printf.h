/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 00:25:29 by mcarecho          #+#    #+#             */
/*   Updated: 2022/04/13 21:07:18 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

# define HEX "0123456789abcdef"
# define HEXU "0123456789ABCDEF"

# if __APPLE__
#  define IS_MACOS TRUE
# else
#  define IS_MACOS FALSE
# endif

int				ft_printf(const char *str, ...);

int				write_char(va_list ptr, char c);

int				write_char(va_list ptr, char c);

int				write_int(va_list ptr);

int				write_string(va_list ptr);

int				write_unsigned(va_list ptr);

int				write_hex(va_list ptr, char c);

int				ft_base(unsigned long int p, char *base);

char			*ft_unsigned_itoa(int n);

int				write_hex_p(va_list ptr);

#endif
