/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 23:31:44 by marvin            #+#    #+#             */
/*   Updated: 2020/01/09 23:31:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const void *s, int c, size_t n)
{
	unsigned char *src;

    src = (unsigned char *)s;
    n = 0;
	while (src[n] != c && src[n])
		n++;
	if (src[n] == '\0')
		return (NULL);
	return ((unsigned char *)s + n);
}