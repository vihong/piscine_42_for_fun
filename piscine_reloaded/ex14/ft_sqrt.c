/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 00:30:28 by vi-hong           #+#    #+#             */
/*   Updated: 2016/11/28 00:31:01 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n <= 47000)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}