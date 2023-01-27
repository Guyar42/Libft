/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:05:02 by guyar             #+#    #+#             */
/*   Updated: 2021/11/20 15:46:17 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	str1 = (void *)s1;
	str2 = (void *)s2;
	while (str1[i] == str2[i] && (i < n - 1))
		i++;
	if (str1[i] != str2[i])
		return (str1[i] - str2[i]);
	return (0);
}
