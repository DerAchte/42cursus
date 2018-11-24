/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:18:12 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/07 20:57:43 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *ret;

	i = min;
	if (min >= max)
		return (NULL);
	while (i < max)
		i++;
	if (!(ret = (int*)malloc(sizeof(int) * i)))
		return (NULL);
	return (ret);
}
