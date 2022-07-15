/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:55:05 by mcarecho          #+#    #+#             */
/*   Updated: 2021/11/23 18:53:44 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_main_itoa(char *str, size_t n_digits, unsigned int n)
{
	str[n_digits] = '\0';
	n_digits -= 1;
	while (n > 9)
	{
		str[n_digits] = (n % 10) + '0';
		n = n / 10;
		n_digits--;
	}
	if (n < 10)
		str[n_digits] = n + '0';
	return (str);
}

static size_t	ft_numlen(unsigned int num)
{
	size_t	len;

	len = 0;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_unsigned_itoa(int n)
{
	size_t	n_digits;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	n_digits = ft_numlen(n);
	str = (char *)malloc((n_digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_main_itoa(str, n_digits, n);
	return (str);
}
