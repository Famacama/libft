/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 23:31:44 by marvin            #+#    #+#             */
/*   Updated: 2020/01/10 11:49:23 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;

	src = (unsigned char *)s;
	n = 0;
	while (src[n] != c && src[n])
		n++;
	if (src[n] == '\0')
		return (NULL);
	return ((char *)s + n);
}
