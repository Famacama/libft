/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 14:00:21 by famacama          #+#    #+#             */
/*   Updated: 2020/01/07 14:08:51 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_bzero(void *s, int n)
{
	char *dest;
	if (s == NULL)
		return (NULL);
	dest = s;
	while (n)
	{
		*dest = 0;
		n--;
		dest++;
	}
	return (s);
}

#include <stdio.h>

int		main(void)
{
	unsigned char *s;
	printf("%s\n", ft_bzero(s, 6));
	return (0);
}
