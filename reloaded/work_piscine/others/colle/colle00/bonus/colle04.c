/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 12:39:22 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/07 23:37:25 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		print_head(int x)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= x)
	{
		if (x_pos == 1)
			ft_putchar('A');
		if (x_pos > 1 && x_pos < x)
			ft_putchar('B');
		if (x_pos == x && x > 1)
			ft_putchar('C');
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
			ft_putchar('B');
		else if (x_pos > 1 && x_pos < x)
			ft_putchar(' ');
		x_pos++;
	}
}

void		print_feet(int x)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= x)
	{
		if (x_pos == 1)
			ft_putchar('C');
		if (x_pos > 1 && x_pos < x)
			ft_putchar('B');
		if (x_pos == x && x > 1)
			ft_putchar('A');
		x_pos++;
	}
}

void		colle(int x, int y)
{
	int		y_pos;

	if (x <= 0 || y <= 0)
		return ;
	y_pos = 1;
	while (y_pos <= y)
	{
		if (y_pos == 1)
			print_head(x);
		if (y_pos > 1 && y_pos < y)
			print_body(x);
		if (y_pos == y && y > 1)
			print_feet(x);
		y_pos++;
		ft_putchar('\n');
	}
}
