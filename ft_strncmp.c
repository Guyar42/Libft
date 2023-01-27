/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:58:56 by guyar             #+#    #+#             */
/*   Updated: 2021/11/20 19:36:24 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int				i;

	i = 0;
	while (i < n && (s2[i] != '\0' || s1[i] != '\0'))
	{
		if (s2[i] == s1[i])
			i++;
		else
			return ((unsigned char)s1[i] - s2[i]);
	}
	return (0);
}
