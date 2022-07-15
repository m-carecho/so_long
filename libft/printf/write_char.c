/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:41:49 by mcarecho          #+#    #+#             */
/*   Updated: 2021/11/23 14:29:57 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_char(va_list ptr, char c)
{
	char	s;
	int		len;

	if (c == 'c')
	{
		s = va_arg(ptr, int);
		write(1, &s, 1);
	}
	else if (c == '%')
	{
		s = '%';
		write(1, &s, 1);
	}
	len = 1;
	return (len);
}
