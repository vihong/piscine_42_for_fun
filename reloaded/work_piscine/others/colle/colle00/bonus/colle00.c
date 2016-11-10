/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 12:39:22 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/07 23:32:56 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		print_head(int x)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= x)
	{
		if (x_pos == 1 || x_pos == x)
			ft_putchar('o');
		else if (x_pos > 1 && x_pos < x)
			ft_putchar('-');
		x_pos++;
	}
}

void		print_body(int x)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= x)
	{
		if (x_pos == 1 || x_pos == x)
			ft_putchar('|');
		else if (x_pos > 1 && x_pos < x)
			ft_putchar(' ');
		x_pos++;
	}
}

void		colle(int x, int y)
{
	int		y_pos;

	y_pos = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (y_pos <= y)
	{
		if (y_pos == 1 || y_pos == y)
			print_head(x);
		if (y_pos > 1 && y_pos < y)
			print_body(x);
		y_pos++;
		ft_putchar('\n');
	}
}
