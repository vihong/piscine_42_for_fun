/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 23:09:35 by vi-hong           #+#    #+#             */
/*   Updated: 2016/12/11 23:42:58 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_display(char *argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = 0;
	ret = 0;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return ;
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return ;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc < 2)
			ft_putstr("File name missing.\n");
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
	}
	else
	{
		ft_display(argv[1]);
	}
	return (0);
}
