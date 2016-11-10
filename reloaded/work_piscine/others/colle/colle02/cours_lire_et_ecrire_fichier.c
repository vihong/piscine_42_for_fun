/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cours_lire_et_ecrire_fichier.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:56:38 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/20 19:21:05 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int		main()
{
	FILE*	fichier = NULL;
	
	fichier = fopen("text.txt", "a+");

	if(fichier != NULL)
	{
		fputs(" Greg", fichier);
		fclose(fichier);
	}
	else
	{
		printf("le fopen a echoue");
	}
	return (0);
}
