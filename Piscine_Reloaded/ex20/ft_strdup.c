/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:04:54 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/07 20:55:11 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	if (!(str = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (*src)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
