/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <famacama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:32:17 by famacama          #+#    #+#             */
/*   Updated: 2020/01/16 14:19:56 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				is_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

void			ft_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

unsigned int	count_words(char *str, char *charset)
{
	unsigned int i;
	unsigned int nb_words;
	unsigned int word_len;

	nb_words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_in_charset(str[i], charset))
			i++;
		word_len = 0;
		while (str[i + word_len] && !is_in_charset(str[i + word_len], charset))
			word_len++;
		if (word_len)
			nb_words++;
		i += word_len;
	}
	return (nb_words);
}

char	**fill_words(char **res, char *str, char *charset, unsigned int nb_words)
{
	unsigned int	word_len;
	unsigned int	i;
	unsigned int	j;

	i = -1;
	j = 0;
	while (++i < nb_words)
	{
		while (str[j] && is_in_charset(str[j], charset))
			j++;
		word_len = 0;
		while (str[j + word_len] && !is_in_charset(str[j + word_len], charset))
			word_len++;
		res[i] = malloc(sizeof(*res[i]) * (word_len + 1));
		if (!res[i])
			return (NULL);
		ft_strcpy(res[i], &str[j], word_len);
		j += word_len;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char			**res;
	unsigned int	nb_words;

	nb_words = count_words(s, c);
	res = malloc(sizeof(*res) * (nb_words + 1));
	if (!res)
		return (NULL);
	res = fill_words(res, s, c, nb_words);
	res[nb_words] = 0;
	return (res);
}
