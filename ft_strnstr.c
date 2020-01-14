/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 10:34:28 by famacama          #+#    #+#             */
/*   Updated: 2020/01/14 11:04:01 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t slen)
{
	size_t l;
	size_t b;

	if (!ft_strlen(src) || !dst)
		return ((char *)dst);
	b = 0;
	while (dst[b] && b < slen)
	{
		l = 0;
		while (src[l] && dst[b + l] && src[l] == dst[b + l]
			&& (b + l) < slen)
			l++;
		if (!src[l])
			return ((char*)&dst[b]);
		b++;
	}
	return (0);
}

/*
**#include <stdio.h>
**#include <string.h>
**
**int main(void)
**{
**	char str1[] = "MZIRIBMZIRIBMZE123";
**	const char *to_find1 = "MZIRIBMZE";
**	size_t max = ft_strlen(to_find1);
**	printf("%s", ft_strnstr(str1, to_find1, max));
**	printf("\n");
**	char str2[] = "MZIRIBMZIRIBMZE123";
**	const char *to_find2 = "MZIRIBMZE";
**	size_t max2 = ft_strlen(to_find2);
**	printf("%s", strnstr(str2, to_find2, max2));
**}
*/
