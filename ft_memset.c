/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 11:42:44 by famacama          #+#    #+#             */
/*   Updated: 2020/01/10 11:41:19 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*dest;

	dest = s;
	if (s == NULL)
		return (NULL);
	while (n)
	{
		*dest = c;
		n--;
		dest++;
	}
	return (s);
}
/*
**#include <stdio.h>
**
**int		main(void)
**{
**	unsigned char *s;
**	printf("%s\n", ft_memset(s, 97, 6));
**	return (0);
**}
*/
