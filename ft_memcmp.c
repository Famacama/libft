/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 23:08:40 by marvin            #+#    #+#             */
/*   Updated: 2020/01/09 23:08:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strncmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
    unsigned char *s;
    unsigned char *t;

	i = 0;
    s = (unsigned char *)s1;
    t = (unsigned char *)s2;
	while ((s[i] == t[i]) && s[i] && t[i] && i < n)
		i++;
	return (s[i] - t[i]);
}