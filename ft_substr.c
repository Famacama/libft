/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:26:26 by famacama          #+#    #+#             */
/*   Updated: 2020/01/21 19:10:57 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tab;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(tab = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (((start + len) > ft_strlen(s)) && start < ft_strlen(s))
		len = ft_strlen(s) - start;
	while (s[start] && len != 0)
	{
		tab[i] = s[start];
		i++;
		start++;
		len--;
	}
	tab[i] = '\0';
	return (tab);
}
