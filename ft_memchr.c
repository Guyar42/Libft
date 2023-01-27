/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:40:03 by guyar             #+#    #+#             */
/*   Updated: 2021/11/22 14:06:52 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		cc;
	size_t		i;
	const char	*str;

	if (n <= 0)
		return (0);
	str = s;
	cc = c;
	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == cc)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
