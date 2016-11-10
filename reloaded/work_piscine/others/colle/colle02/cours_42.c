/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cours_42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:06:02 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/21 02:26:51 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#define BUF_SIZE 4096

int		ft_strlen(char* str)
{
	int	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(int fd, char* str)
{
	write(fd, str, ft_strlen(str));
}

int		main()
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];
//	fd = open("43", O_RDONLY);
//	if (fd == -1)
//		printf("ERREUR\n");
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	printf("%s\n", buf);
	printf("%d\n", ret);
	if (close(fd) == -1)
		printf("ERREUR\n");
	printf("%d\n", fd);
	return (0);
}
