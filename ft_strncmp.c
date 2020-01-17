/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 09:49:44 by famacama          #+#    #+#             */
/*   Updated: 2020/01/17 14:18:05 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;
	size_t			i;

	i = 0;
	src = (unsigned char *)s1;
	dest = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while ((src[i] == dest[i] && src[i] && dest[i] && i < n - 1))
		i++;
	return (src[i] - dest[i]);
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
