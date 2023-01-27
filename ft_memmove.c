/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:51:00 by guyar             #+#    #+#             */
/*   Updated: 2021/11/20 15:17:50 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	if (!dest && !source)
		return (0);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{	
			dest[i] = source[i];
			i++;
		}
		return (dst);
	}
	i = len;
	while (i > 0)
	{
		dest[i - 1] = source[i - 1];
		i--;
	}
	return (dst);
}
