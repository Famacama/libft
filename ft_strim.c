/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:23:28 by famacama          #+#    #+#             */
/*   Updated: 2020/01/16 13:08:36 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	check_first(char const *s1, char const *set, int i)
{
	int j;

	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
			return (1);
		j++;
	}
	return (0);
}

int	check_last(char const *s1, char const *set, int i)
{
	int j;

	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int f;
	int l;
	int i;
	int j;
	char *tab;

	f = 0;
	l = 0;
	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	j = ft_strlen(s1);
	while (check_first(s1, set, i))
	{
		i++;
		f++;
	}
	i = ft_strlen(s1) - 1;
	while (check_last(s1, set, i))
	{
		l++;
		i--;
	}
	if ((j - f - l) < 0)
	{
		if (!(tab = malloc(sizeof(*tab) + 1)))
			return (NULL);
		return (tab);
	}
	tab = ft_substr(s1, f, (j - f - l));
	return (tab);
}

/*
**int	main()
**{
**	char s1[] = "  \t \t \n   \n\n\n\t";
**	char set[] = " \n\t";
**	printf("%s", ft_strtrim(s1, set));
**	return (0);
**}
*/