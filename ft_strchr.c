/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:58:59 by famacama          #+#    #+#             */
/*   Updated: 2020/01/07 11:56:29 by famacama         ###   ########.fr       */
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
	while (s[i] != c && s[i])
		i++;
	if (s[i] == '\0')
		return (NULL);
	return ((char *)s + i);
}

int		main(void)
{
	const char s[] = "This is a string";

	printf("%s", ft_strchr(s, 97));
	return (0);
}
