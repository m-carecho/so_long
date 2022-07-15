/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 00:25:18 by mcarecho          #+#    #+#             */
/*   Updated: 2021/11/24 00:25:23 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type(const char *c, va_list ptr)
{
	int	len;

	len = 0;
	if (*c == 'c')
		len = write_char(ptr, *c);
	else if (*c == 's')
		len = write_string(ptr);
	else if (*c == 'p')
		len = write_hex_p(ptr);
	else if (*c == 'd')
		len = write_int(ptr);
	else if (*c == 'i')
		len = write_int(ptr);
	else if (*c == 'u')
		len = write_unsigned(ptr);
	else if (*c == 'x')
		len = write_hex(ptr, *c);
	else if (*c == 'X')
		len = write_hex(ptr, *c);
	else if (*c == '%')
		len = write_char(ptr, *c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	i = 0;
	len = 0;
	va_start(ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			len += type(&str[i], ptr);
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	return (len);
}
