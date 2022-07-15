/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:49:43 by mcarecho          #+#    #+#             */
/*   Updated: 2021/09/07 18:22:33 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while (*s2 && *s1 && *s2 == *s1 && a < n - 1)
	{
		s1++;
		s2++;
		a++;
	}
	return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
}
