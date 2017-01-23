/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 12:36:07 by vi-hong           #+#    #+#             */
/*   Updated: 2016/12/09 12:54:53 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

int		main()
{
	int		fd = 0;
	int		ret = 0;
	char	buf[BUF_SIZE + 1]; 

	printf("fd: %d\n", fd);
	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		printf("open() failed\n");
		return (1);
	}
	printf("fd: %d\n", fd);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	printf("%d\n", ret);
	printf("%s", buf);
	if (close(fd) == -1)
	{
		printf("close() failed\n");
		return (1);
	}
	return (0);
}
