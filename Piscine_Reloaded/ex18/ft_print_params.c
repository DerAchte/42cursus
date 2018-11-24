/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:54:15 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/07 20:53:13 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 2;
	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i <= ac)
	{
		ft_putstr(av[i - 1]);
		i++;
		ft_putchar('\n');
	}
}
