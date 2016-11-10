/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 01:59:02 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/21 18:30:20 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

#define BUF_SIZE 4000

char*	ft_strcpy(char* dest, char* src)
{
	int	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}


char*	ft_strcat(char* dest, char* src)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
		i++;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}



int		main()
{

	char	buf[2];
	char*	dest = (char*)malloc(sizeof(char) + 1);
	char*	tmp = (char*)malloc(sizeof(char) + 1);
	int 	i = 1;
	
	while(read(0, buf, 1))
	{
		buf[1] = '\0';
		free(tmp);
		tmp = (char*)malloc(sizeof(char) * (i + 1));
		ft_strcpy(tmp, dest);
		free(dest);
		dest = (char*)malloc(sizeof(char) * (i + 1));
		ft_strcpy(dest, tmp);
		dest = ft_strcat(dest, buf);
		i++;
	}
	printf("%s", dest);	
	printf("%d\n", i);
	return(0);
}
