/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:17:07 by mcarecho          #+#    #+#             */
/*   Updated: 2021/11/23 17:03:24 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_unsigned(va_list ptr)
{
	unsigned int	nb;
	char			*s;
	int				len;

	nb = va_arg(ptr, unsigned int);
	s = ft_unsigned_itoa(nb);
	len = ft_strlen(s);
	write(1, s, len);
	free (s);
	return (len);
}
