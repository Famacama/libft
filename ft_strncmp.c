/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 09:49:44 by famacama          #+#    #+#             */
/*   Updated: 2020/01/09 12:43:28 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int main(void)
**{
**	const char s1[] = "Salut Famb";
**	const char s2[] = "Salut Fama";
**
**	printf("%d\n", ft_strncmp(s1, s2, 5));
**	printf("%d", strncmp(s1, s2, 5));
**
**	return (0);
**}
*/
