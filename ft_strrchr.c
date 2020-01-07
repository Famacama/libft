/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:05:25 by famacama          #+#    #+#             */
/*   Updated: 2020/01/07 11:19:18 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j == 0)
		return (NULL);
	return ((char*)s + j);
}

int		main(void)
{
	const char s[] = "This is a string Hello i";

	printf("%s", ft_strchr(s, 106));
	return (0);
}
