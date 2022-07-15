/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:49:12 by mcarecho          #+#    #+#             */
/*   Updated: 2021/09/07 17:56:11 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str, const void *ptr, size_t n)
{
	size_t			a;
	unsigned char	*str1;
	unsigned char	*ptr1;

	str1 = (unsigned char *)str;
	ptr1 = (unsigned char *)ptr;
	a = 0;
	while (*(str1 + a) == *(ptr1 + a) && ++a < n)
		;
	if (a == n)
		return (0);
	return (*(str1 + a) - *(ptr1 + a));
}
