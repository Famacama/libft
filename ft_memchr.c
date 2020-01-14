/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 23:31:44 by marvin            #+#    #+#             */
/*   Updated: 2020/01/13 14:38:01 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *src;
	size_t i;

	src = (const char *)s;
	i = -1;
	while (++i < n)
		if (src[i] == c)
			return ((void *)&src[i]);
	return (NULL);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int main()
**{
**	char *s;
**	int size = 10;
**
**	s = "/|\x12\xff\x09\x42\2002\42|\\";
**	printf("%p\n", memchr(s, '\200', size));
**	printf("%p\n",ft_memchr(s, '\200', size));
**	return(0);
**}
*/
