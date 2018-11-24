/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:43:48 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/07 20:59:55 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#define BUF_SIZE 4096

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	if (ac < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)) != 0)
		write(1, buf, ret);
	close(fd);
	return (0);
}
