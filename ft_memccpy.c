/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:24:21 by famacama          #+#    #+#             */
/*   Updated: 2020/01/13 12:41:28 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = -1;
	while (++i < n)
	{
		tmp_dst[i] = tmp_src[i];
		if (tmp_dst[i] == (unsigned char)c)
			return (&tmp_dst[i + 1]);
	}
	return (NULL);
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
