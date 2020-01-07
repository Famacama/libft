/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:08:19 by famacama          #+#    #+#             */
/*   Updated: 2020/01/06 15:19:49 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (size == 0)
		return(l);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(i);
}

int main(void)
{
	char d[10];
	const char s[] = "fama";

	ft_strlcpy(d, s, 5);
	return(0);
}
