/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:49:54 by mcarecho          #+#    #+#             */
/*   Updated: 2021/09/07 18:25:19 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	int		len;
	char	ch;

	ch = (unsigned char)n;
	len = ft_strlen(str);
	if (ch == 0)
		return ((char *)(str + len));
	while (--len >= 0)
	{
		if (*(str + len) == ch)
		{
			return ((char *)(str + len));
		}
	}
	return (NULL);
}
