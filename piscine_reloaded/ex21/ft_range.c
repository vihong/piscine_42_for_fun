/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 00:40:39 by vi-hong           #+#    #+#             */
/*   Updated: 2016/11/28 00:41:11 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		len;
	int		*tab;
	int		i;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
