/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:21:19 by guyar             #+#    #+#             */
/*   Updated: 2021/11/20 17:46:07 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*source;
	size_t		i;
	size_t		len;

	len = 0;
	while (src[len])
		len++;
	source = (char *)src;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (len);
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = source[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
