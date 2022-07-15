/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:48:39 by mcarecho          #+#    #+#             */
/*   Updated: 2021/09/07 17:53:43 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*p;

	p = malloc(nelem * size);
	if (p == 0)
		return (p);
	ft_bzero(p, nelem * size);
	return (p);
}
