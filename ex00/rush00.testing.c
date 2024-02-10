/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 03:48:13 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/10 08:52:24 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rush(int x, int y);
void    ft_putchar(char c);

int main(void)
{
	printf("\nx = 4, y = 6\n\n");
	rush(4,6);
	printf("\nx = 8, y = 3\n\n");
	rush(8,3);
	printf("\nx = 2, y = 4\n\n");
	rush(2,4);
	printf("\nx = 5, y = 1\n\n");
	rush(5,1);
	printf("\nx = 1, y = 3\n\n");
	rush(1,3);
	printf("\nx = 0, y = 6\n\n");
	rush(0,6);
	printf("\nx = 8, y = 0\n\n");
	rush(8,0);
	printf("\nx = -4, y = 6\n\n");
	rush(-4,6);
	printf("\nx = 8, y = -3\n\n");
	rush(8,-3);
	printf("\nx = -5, y = -5\n\n");
	rush(-5,-5);
	return (0);
}

void	rush(int x, int y)
{	
	int	compteur1;
	int	compteur2;

	if (x > 0 && y > 0) //Not printing anything if x or y is null or negative
	{
		
		//Start printing the 1st line             o-----o
		putchar('o');
		compteur1 = 0;
		while(compteur1 < x - 2)
		{
			putchar('-');
			compteur1++;
		}
		if (x > 1) //Printing the last 'o' (only if there are at least 2 columns, meaning x > 1)
		{
			putchar('o');
		}
		putchar('\n');
		//Finish printing the 1st line

		//Start printing the lines in the middle  |        |
		compteur1 = 0;
		while(compteur1 < y - 2)
		{
			putchar('|');
			compteur2 = 0; // We need a second compteur, because we are already using compteur1
			while(compteur2 < x - 2)
			{
				putchar(' ');
				compteur2++;
			}
			if (x > 1) //Printing the last 'o' (only if there are at least 2 columns, meaning x > 1)
			{
				putchar('|');
			}
			putchar('\n');
			compteur1++;
		}
		//Finish printing the lines in the middle

		//Start printing the last line (only if there are at least 2 lines, meaning y > 1)
		if(y > 1)
		{
			putchar('o');
			compteur1 = 0;
			while(compteur1 < x - 2)
			{
				putchar('-');
				compteur1++;
			}
			if (x > 1) //Printing the last 'o' (only if there are at least 2 columns, meaning x > 1)
			{
					putchar('o');
			}		
			putchar('\n');
		}
		//Finish printing the last line (only if there are at least 2 lines, meaning y > 1)

	}
}

void    ft_putchar(char c)
{
	write(1, &c, 1);
}
