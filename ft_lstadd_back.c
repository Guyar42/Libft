/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:00:16 by guyar             #+#    #+#             */
/*   Updated: 2021/11/20 15:11:54 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tampon;

	tampon = *alst;
	if (!new)
		return ;
	if (!*alst)
	{
			*alst = new;
		return ;
	}
	while (tampon->next != NULL)
	{
		tampon = tampon->next;
	}	
	tampon->next = new;
}
