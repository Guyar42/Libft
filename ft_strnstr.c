/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:23:42 by guyar             #+#    #+#             */
/*   Updated: 2021/11/23 18:37:54 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_loop(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*adresse;

	i = 0;
	j = 0;
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (i < len)
	{
		while (haystack[i] == needle[j] && i < len)
		{
			if (haystack[i] == needle[0] && j == 0)
				adresse = (void *)haystack + i;
			j++;
			i++;
			if (!needle[j])
				return (adresse);
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	return (ft_loop(haystack, needle, len));
}
