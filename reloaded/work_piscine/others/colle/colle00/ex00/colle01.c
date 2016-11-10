/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 14:51:25 by jcharloi          #+#    #+#             */
/*   Updated: 2016/08/07 22:44:21 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_top(int x)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= x)
	{
		if (x_pos == 1)
			ft_putchar('/');
		if (x_pos > 1 && x_pos < x)
			ft_putchar('*');
		if (x_pos == x && x > 1)
			ft_putchar('\\');
		x_pos++;
	}
}

void	print_mid(int x)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= x)
	{
		if (x_pos == 1)
			ft_putchar('*');
		if (x_pos > 1 && x_pos < x)
			ft_putchar(' ');
		if (x_pos == x && x > 1)
			ft_putchar('*');
		x_pos++;
	}
}

void	print_bot(int x)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= x)
	{
		if (x_pos == 1)
			ft_putchar('\\');
		if (x_pos > 1 && x_pos < x)
			ft_putchar('*');
		if (x_pos == x && x > 1)
			ft_putchar('/');
		x_pos++;
	}
}

void	colle(int x, int y)
{
	int	y_pos;

	y_pos = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (y_pos <= y)
	{
		if (y_pos == 1)
			print_top(x);
		if (y_pos > 1 && y_pos < y)
			print_mid(x);
		if (y_pos == y && y > 1)
			print_bot(x);
		y_pos++;
		ft_putchar('\n');
	}
}
