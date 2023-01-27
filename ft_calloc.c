/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:42:51 by guyar             #+#    #+#             */
/*   Updated: 2021/11/24 18:05:35 by guyar            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
	char		*ptr;

	ptr = malloc(size * count);
	i = 0;
	if (ptr == 0)
		return (0);
	while (i < size * count)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
