/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:16:28 by mcarecho          #+#    #+#             */
/*   Updated: 2021/11/23 15:29:15 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(unsigned long int p, int base_size)
{
	int	i;

	i = 0;
	base_size = 16;
	if (!p)
		return (TRUE);
	while (p)
	{
		p = p / base_size;
		i++;
	}
	return (i);
}

int	ft_base(unsigned long int p, char *base)
{
	int		size_num;
	char	*num;
	int		base_size;
	int		i;

	base_size = 16;
	size_num = ft_size(p, base_size);
	num = (char *)malloc((size_num + 1) * sizeof(char));
	i = size_num;
	while (i > 0)
	{
		num[i - 1] = base[p % 16];
		p = p / 16;
		i--;
	}
	write(1, num, size_num);
	free (num);
	return (size_num);
}
