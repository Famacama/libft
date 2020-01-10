/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:07:37 by famacama          #+#    #+#             */
/*   Updated: 2020/01/10 11:41:00 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (d == NULL)
		return (NULL);
	while (s[i] && i < n && s[i] != c)
	{
		d[i] = s[i];
		i++;
	}
	while (i < n)
		((unsigned char *)d)[i++] = '\0';
	return ((unsigned char *)dest);
}
/*
**#include <stdio.h>
**int main()
**{
**	char src[] = "test basic du memcpy !";
**	char buff1[22];
**	printf("%s", ft_memccpy(buff1, src, 99, 22));
**	return (0);
**}
*/
