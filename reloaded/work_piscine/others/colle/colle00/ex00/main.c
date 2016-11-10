/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 14:49:36 by jcharloi          #+#    #+#             */
/*   Updated: 2016/08/20 23:30:03 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char*		colle(int x, int y);

int		main(void)
{

	printf("%s", colle(4, 3));

	printf("%s", colle(5, 3));
	printf("%s", colle(5, 1));
	printf("%s", colle(1, 1));
	printf("%s", colle(1, 5));
	printf("%s", colle(4, 4));
	printf("%s", colle(20, 5));
	return (0);
}
