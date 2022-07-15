/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:49:10 by mcarecho          #+#    #+#             */
/*   Updated: 2021/09/07 17:55:52 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	a;
	char	*sr;

	a = 0;
	sr = (char *)str;
	while (a < n)
	{
		if (sr[a] == (char)c)
			return ((void *)(&sr[a]));
		a++;
	}
	return (NULL);
}
