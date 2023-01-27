/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:19:44 by guyar             #+#    #+#             */
/*   Updated: 2021/11/23 18:28:57 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_compteur(int n)
{
	int	compteur;

	compteur = 0;
	while (n > 0)
	{
		n = n / 10;
		compteur++;
	}
	return (compteur);
}

char	*ft_putintab(char *tab, int n, int signe)
{
	int	len;

	len = ft_compteur(n);
	if (signe == 0)
		len = len + 1;
	tab[len] = '\0';
	while (len > 0)
	{
		tab[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (tab);
}

char	*ft_sizero(int n, char *tab)
{
	if (n == 0)
	{
		tab[0] = '0';
		tab[1] = '\0';
		return (tab);
	}
	return (tab);
}

char	*ft_sipositif(char *tab, int n)
{	
	if (n == 0)
		return (ft_sizero(n, tab));
	ft_putintab(tab, n, 1);
	return (tab);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*tab;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n < 0)
	{	
		n = -n;
		tab = malloc(sizeof(char) * ft_compteur(n) + 2);
		if (!tab)
			return (NULL);
		ft_putintab(tab, n, 0);
		tab[0] = '-';
		return (tab);
	}
	if (n == 0)
		tab = malloc(sizeof(char) * ft_compteur(n) + 2);
	else
		tab = malloc(sizeof(char) * ft_compteur(n) + 1);
	if (!tab)
		return (NULL);
	tab = ft_sipositif(tab, n);
	return (tab);
}
