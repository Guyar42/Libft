/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:47:02 by guyar             #+#    #+#             */
/*   Updated: 2021/11/20 15:34:26 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nombredemots(const char *s, char c)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		if (s[i - 1] != c)
			compteur++;
		while (s[i] == c && s[i])
			i++;
	}
	return (compteur);
}

int	ft_checkstart(const char *s, int numerodumot, char separateur)
{
	int	i;
	int	mot;

	i = 0;
	mot = 0;
	while (s[i])
	{
		while (s[i] == separateur && s[i])
			i++;
		mot++;
		if (mot == numerodumot + 1)
			return (i);
		while (s[i] != separateur && s[i])
			i++;
		while (s[i] == separateur && s[i])
			i++;
	}
	return (0);
}

int	ft_lendumot(const char *s, char separateur, int debutdumot)
{
	int	i;

	i = 0;
	while (s[debutdumot + i] != separateur && s[debutdumot + i])
		i++;
	return (i);
}

void	ft_boucle(char **tab, int i, char const *s, char c)
{
	int	j;

	j = 0;
	while (j < i)
	{
		tab[j] = ft_substr(s, ft_checkstart(s, j, c),
				ft_lendumot(s, c, ft_checkstart(s, j, c)));
		if (!tab[j])
		{
			i = 0;
			while (tab[i])
			{
				free(tab[i]);
				i++;
			}
			free(tab);
		}
		j++;
	}
	tab[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	i = ft_nombredemots(s, c);
	tab = malloc(sizeof(char *) * (i + 1));
	if (!tab)
		return (NULL);
	ft_boucle(tab, i, s, c);
	return (tab);
}
