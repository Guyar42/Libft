/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:45:29 by guyar             #+#    #+#             */
/*   Updated: 2021/11/20 14:56:24 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	ch;
	char	*adresse;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	ch = c;
	while (s[len])
		len++;
	while (i <= len)
	{
		if (s[i] == ch)
		{
			j++;
			adresse = (void *)s + i;
		}
		i++;
	}
	if (j == 0)
		return (NULL);
	return (adresse);
}
