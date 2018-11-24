/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:43:01 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/23 15:49:36 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!ft_isalnum(str[i]))
		{
			words++;
			while (!ft_isalnum(str[i]))
				i++;
		}
		else
			i++;
	}
	return (words);
}

