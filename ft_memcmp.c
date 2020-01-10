/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 23:08:40 by marvin            #+#    #+#             */
/*   Updated: 2020/01/10 11:41:07 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*t;

	i = 0;
	s = (unsigned char *)s1;
	t = (unsigned char *)s2;
	while ((s[i] == t[i]) && s[i] && t[i] && i < n)
		i++;
	return (s[i] - t[i]);
}
