/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:07:36 by mcarecho          #+#    #+#             */
/*   Updated: 2021/11/23 14:33:41 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_int(va_list ptr)
{
	int		nb;
	char	*s;
	int		len;

	nb = va_arg(ptr, int);
	s = ft_itoa(nb);
	len = ft_strlen(s);
	write(1, s, len);
	free (s);
	return (len);
}
