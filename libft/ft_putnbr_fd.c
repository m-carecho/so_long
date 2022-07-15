/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:21:20 by mcarecho          #+#    #+#             */
/*   Updated: 2021/09/13 00:04:11 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	loop(int nb, int fd)
{
	if (nb >= 10)
	{
		loop(nb / 10, fd);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == INT_MIN)
	{
		write(fd, "-", 1);
		loop(nb / -10, fd);
		write(fd, "8", 1);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	if (nb >= 0)
		loop(nb, fd);
}
