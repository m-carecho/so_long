/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:31:04 by mcarecho          #+#    #+#             */
/*   Updated: 2021/11/23 18:54:44 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_hex(va_list ptr, char c)
{
	unsigned long int	p;
	int					len;

	len = 0;
	if (c == 'x')
	{
		p = va_arg(ptr, unsigned int);
		len = ft_base(p, HEX);
	}
	else if (c == 'X')
	{
		p = va_arg(ptr, unsigned int);
		len = ft_base(p, HEXU);
	}
	return (len);
}

int	write_hex_p(va_list ptr)
{
	unsigned long int	p;
	int					len;

	len = 0;
	p = va_arg(ptr, unsigned long int);
	if (p == 0 && IS_MACOS)
	{
		write(1, "0x0", 3);
		len += 3;
	}
	else if (p == 0 && !IS_MACOS)
	{
		write(1, "(nil)", 5);
		len += 5;
	}
	else
	{
		write(1, "0x", 2);
		len = ft_base(p, HEX);
		len += 2;
	}
	return (len);
}
