/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:38:14 by mcarecho          #+#    #+#             */
/*   Updated: 2021/09/12 21:35:33 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	count;

	if (!s || !f)
		return (NULL);
	count = 0;
	res = ft_strdup(s);
	if (res == NULL)
		return (NULL);
	while (res[count] != 0)
	{
		res[count] = f(count, res[count]);
		count++;
	}
	return (res);
}
