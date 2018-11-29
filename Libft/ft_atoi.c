/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:04:00 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/22 18:46:25 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (ft_iswhite(str[i]) == 1)
		i++;
	neg = str[i] == '-' ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	res *= neg;
	if (res > 2147483647)
		return (-1);
	else if (res < -2147483648)
		return (0);
	else
		return (res);
}

int	main()
{
	char n[40] = "99999999999999999999999999";
        int i1 = atoi(n);
        int i2 = ft_atoi(n);

	printf("%d\n%d\n", i1, i2);
}
