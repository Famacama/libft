/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 11:32:42 by famacama          #+#    #+#             */
/*   Updated: 2020/01/17 14:16:14 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((unsigned char *)dest);
}
/*
**#include <stdio.h>
**int main()
**{
**	char src[] = "test basic du memcpy !";
**	char buff1[22];
**	printf("%s", ft_memcpy(buff1, src, 22));
**	return (0);
**}
*/
