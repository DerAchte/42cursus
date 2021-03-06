/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:12:18 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/07 20:57:32 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int count;

	count = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			count++;
		*tab++;
	}
	return (count);
}
