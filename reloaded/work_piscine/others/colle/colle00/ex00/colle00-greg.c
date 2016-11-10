/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 12:39:22 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/20 23:30:01 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	print_head(char* fig, int* x, int* i)
{
	int x_pos = 1;
	while (x_pos <= *x)
	{
		if (x_pos ==  1)
			fig[*i] = 'o';
		else if (x_pos > 1 && x_pos < *x)
			fig[*i] = '-';
		else if (x_pos == *x)
			fig[*i] = 'o';
		(*i)++;
		x_pos++;
	}
}

void	print_body(char* fig, int* x, int* i)
{
	int x_pos = 1;
	while (x_pos <= *x)
	{
		if (x_pos ==  1)
			fig[*i] = '|';
		else if (x_pos > 1 && x_pos < *x)
			fig[*i] = ' ';
		else if (x_pos == *x)
			fig[*i] = '|';
		(*i)++;
		x_pos++;
	}
}

void	print_feet(char* fig, int* x, int* i)
{
	int x_pos = 1;
	while (x_pos <= *x)
	{
		if (x_pos ==  1)
			fig[*i] = 'o';
		else if (x_pos > 1 && x_pos < *x)
			fig[*i] = '-';
		else if (x_pos == *x)
			fig[*i] = 'o';
		(*i)++;
		x_pos++;
	}
}

char*	colle(int x, int y)
{
	char*	fig = (char*)malloc(sizeof(char) * ((x + 1) * y));
	int		i;
	int		y_pos = 1;
	int x_pos = 1;

	i = 0;
	if (x <= 0 || y <= 0)
		return(0) ;
	while(y_pos <= y)
	{
		if(y_pos == 1)
			print_head(fig, &x, &i);
		else if(y_pos > 1 && y_pos < y)
			print_body(fig, &x, &i);
		else if(y_pos == y)
			print_feet(fig, &x, &i);
		fig[i] = '\n';
		i++;
		y_pos++;
	}
	fig[i] = '\0';
	return (fig);
}
