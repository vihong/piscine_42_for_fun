/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 12:39:22 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/20 21:49:37 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		print_head(int x, char* fig, int i)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= x)
	{
		if (x_pos == 1 || x_pos == x)
			fig[i] = 'o';
		else if (x_pos > 1 && x_pos < x)
			fig[i] = '-';
		x_pos++;
		i++;
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

char*		colle(int x, int y)
{
	char*	fig;
	int		y_pos;

	fig = (char*)malloc(sizeof(char) * ((x + 1) * y));

	y_pos = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (y_pos <= y)
	{
		if (y_pos == 1 || y_pos == y)
			print_head(x);
		else if (y_pos > 1 && y_pos < y)
			print_body(x);
		fig[i] = '\n';
		y_pos++;
	}
	return (fig);
}
