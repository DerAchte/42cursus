/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:49:33 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/19 18:05:54 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	size_t	size;

	i = 0;
	size = ft_strlen(needle) - 1;
	if (!(*needle))
		return ((char*)haystack);
	while (haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, size) == 0)
			return (&((char*)haystack)[i]);
		i++;
	}
	return (NULL);
}
