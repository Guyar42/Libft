/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:57:22 by guyar             #+#    #+#             */
/*   Updated: 2022/01/19 15:51:02 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

t_list	*ft_lstnew(int content) // pointeur sur int *content
{
	t_list	*contenu;

	contenu = malloc(sizeof(t_list));
	if (!contenu)
		return (NULL);
	if (contenu)
	{
		contenu->content = content;
		contenu->next = NULL;
	}
	return (contenu);
}
