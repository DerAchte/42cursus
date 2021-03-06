/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:20:27 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/23 22:18:20 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word(const char *str, int i, char c)
{
	int		size_words;

	size_words = 0;
	while (str[i++] && str[i] != c)
		size_words++;
	return (size_words);
}

char		**ft_strsplit(char const *s, char c)
{
	int		k;
	int		i;
	int		j;
	char	**r;

	if (!s || !c)
		return (NULL);
	if (!(r = (char**)malloc(sizeof(char*) * ft_skipchar_countwords(s, c) + 1)))
		return (NULL);
	i = 0;
	k = 0;
	while (i < ft_skipchar_countwords(s, c))
	{
		j = 0;
		while (s[k] == c)
			k++;
		if (!(r[i] = ft_strnew(sizeof(char) * word(s, k, c))))
			return (NULL);
		while (s[k] != c && s[k])
			r[i][j++] = s[k++];
		r[i++][j] = '\0';
	}
	r[i] = NULL;
	return (r);
}
