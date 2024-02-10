/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.clean.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 03:48:13 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/10 20:43:01 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

void	rush(int x, int y);
void 	print_line(int x, char side_char, char middle_char);

void	rush(int x, int y)
{	
	int	compteur;

	if (x > 0 && y > 0) //Not printing anything if x or y is null or negative
	{
		print_line(x, 'o', '-');
		compteur = 0;
		while(compteur < y - 2)
		{
			print_line(x, '|', ' ');
			compteur++;
		}
		if(y > 1)
		{
			print_line(x, 'o', '-');
		}
	}
}

void	print_line(int x, char side_char, char middle_char)
{
	int	compteur;

	ft_putchar(side_char);
	compteur = 0;
	while(compteur < x - 2)
	{
		ft_putchar(middle_char);
		compteur++;
	}
	if (x > 1) 
	{
		ft_putchar(side_char);
	}		
	ft_putchar('\n');
}
