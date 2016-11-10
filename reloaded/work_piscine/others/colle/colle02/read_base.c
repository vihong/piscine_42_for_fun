/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:38:54 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/21 18:42:18 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*read_base(void)
{
	char	buf[2];
	char	*dest;
	char	*tmp;
	int		i;

	dest = (char*)malloc(sizeof(char) + 1);
	tmp = (char*)malloc(sizeof(char) + 1);
	i = 1;
	while (read(0, buf, 1))
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
	return (dest);
}
