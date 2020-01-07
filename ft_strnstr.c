/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 10:34:28 by famacama          #+#    #+#             */
/*   Updated: 2020/01/07 10:55:10 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int i;
	int j;

	i = 0;
	if (!(to_find[0]))
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "Salut commtotent ca vas a 19";
	char to_find1[] = "tot";
	printf("%s", ft_strnstr(str1, to_find1, 15));
	printf("\n");
	char str2[] = "Salut commtotent ca vas a 19";
	char to_find2[] = "tot";
	printf("%s", strnstr(str2, to_find2, 15));
}
