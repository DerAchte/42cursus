/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:43:25 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/19 19:33:26 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;

	size = ft_strlen(needle);
	if (!(*needle))
		return ((char*)haystack);
	if (!len)
		return (NULL);
	while (len >= size)
	{
		if (ft_strncmp(haystack, needle, size) == 0)
			return (((char*)haystack));
		len--;
		haystack++;
	}
	return (NULL);
}
