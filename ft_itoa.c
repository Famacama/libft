/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:05:55 by famacama          #+#    #+#             */
/*   Updated: 2020/01/15 14:14:14 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_rev_int_tab(char *tab, int size)
{
	int x;
	int swap;
	int i;

	x = 0;
	i = 0;
	while (x < (size / 2))
	{
		swap = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = swap;
		x++;
	}
	while (tab[i])
		i++;
	tab[i] = '\0';
	return (tab);
}

int	ft_size_tab(int n)
{
	int l;
	int nb;

	l = 1;
	if (n < 0)
	{
		nb = -n;
		l++;
	}
	else
		nb = n;
	while (nb > 9)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

char *ft_full_tab(char *tab, int l, int nb)
{
	int i;

	i = 0;
	while (i < l)
	{
		tab[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_itoa(int n)
{
	int l;
	char *tab;
	unsigned int nb;
	int i;

	i = 0;
	l = ft_size_tab(n);
	if (!(tab = malloc(sizeof(char) * (l + 1))))
		return (NULL);
	nb = (n < 0) ? -n : n;
	if (n == -2147483648)
	{
		ft_strdup(tab);
		tab = "-2147483648\0";
		return (tab);
	}
	if (nb == 2147483647)
	{
		tab = "2147483647\0";
		return (tab);
	}
	if (n == 0)
	{
		tab[i] = '0';
		return (tab);
	}
	tab = ft_rev_int_tab(ft_full_tab(tab, l, nb), l);
	if (n < 0)
		tab[i] = '-';
	return (tab);
}

int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}
