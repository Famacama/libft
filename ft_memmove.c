/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 15:54:00 by marvin            #+#    #+#             */
/*   Updated: 2020/01/10 11:41:15 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	n = 0;
	if (s > d)
	{
		while (s[n])
			n++;
		while (n-- > 0)
			s[n] = d[n];
	}

	else
	{
		while (s[n])
		{
			s[n] = d[n];
			n++;
		}
	}
	return ((unsigned char *)dest);
}
