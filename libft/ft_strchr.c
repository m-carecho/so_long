/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:49:23 by mcarecho          #+#    #+#             */
/*   Updated: 2021/09/07 17:58:51 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int n)
{
	int	a;

	a = 0;
	while (*(str + a) != (char)n)
	{
		if (*(str + a) == 0)
			return (NULL);
		a++;
	}
	return ((char *)(str + a));
}
