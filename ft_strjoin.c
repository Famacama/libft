/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:17:48 by famacama          #+#    #+#             */
/*   Updated: 2020/01/14 21:04:18 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int 	j;

	i = 0;
	j = 0;
	while (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(tab = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		tab[i] = s2[j];
		i++;
		j++;
	}

	tab[i] = '\0';
	return (tab);
}
/*
**int	main(void)
**{
**	char s1[50] = "HEllo FAama2";
**	char s2[50] = "</>";
**	printf("%s", ft_strjoin(s1, s2));
**	return (0);
**}
*/
