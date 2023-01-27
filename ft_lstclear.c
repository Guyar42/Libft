/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:25:43 by guyar             #+#    #+#             */
/*   Updated: 2021/11/22 16:16:48 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tampon;

	if (!lst)
		return ;
	tampon = *lst;
	while (tampon)
	{
		tampon = tampon->next;
		ft_lstdelone(*lst, del);
		*lst = tampon;
	}
	*lst = NULL;
}
