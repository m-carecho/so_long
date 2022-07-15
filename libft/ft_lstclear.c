/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 00:40:35 by mcarecho          #+#    #+#             */
/*   Updated: 2021/09/15 00:45:35 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*element;

	if (*lst == NULL)
		return ;
	element = *lst;
	while (element != NULL)
	{
		tmp = element->next;
		ft_lstdelone(element, del);
		element = tmp;
	}
	*lst = NULL;
}
