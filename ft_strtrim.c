/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:06:24 by guyar             #+#    #+#             */
/*   Updated: 2021/11/16 16:22:09 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_incrementation(int start, int end, char *tab, const char *s1)
{
	int	i;

	i = 0;
	while (start <= end)
		tab[i++] = s1[start++];
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*tab;

	if (!s1 || !set)
		return ((char *)s1);
	end = ft_strlen(s1) - 1;
	i = 0;
	while (ft_check(s1[i], set) == 1)
		i++;
	start = i;
	if ((end - start) <= 0)
		return (ft_strdup("\0"));
	while (ft_check(s1[end], set) == 1)
		end--;
	tab = malloc(sizeof(char) * (end - start) + 2);
	if (tab == NULL)
		return (NULL);
	i = ft_incrementation(start, end, tab, s1);
	tab[i] = '\0';
	return (tab);
}
