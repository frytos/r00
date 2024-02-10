/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:15:54 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/10 19:21:40 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rush(int x, int y);
void    ft_putchar(char c);
void 	print_line(int x, char side_char, char middle_char);
void 	display(int x, int y, int c, int l);



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
	int l;
	int c;
	char need_nl_char;

	l = 0;
	c = 0;
	while(l < y)
	{
		need_nl_char = 0;
		c = 0;
		while(c < x)
		{
			display(x, y, c, l);
			need_nl_char = '\n';
			c++;
		}
		ft_putchar(need_nl_char);
		l++;
	}

}

void display(int x, int y, int c, int l)
{
	if ((l == 0 && c == 0) || (x - c == 1 && y - l == 1))
	{
		ft_putchar('A');
	}
	else if ((y - l == 1 && c == 0) || (x - c == 1 && l == 0))
	{
		ft_putchar('C');
	}
	else if (l == 0 || c == 0 || x - c == 1 || y - l == 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void print_line(int x, char side_char, char middle_char)
{
	int compteur;
	putchar(side_char);
	compteur = 0;
	while(compteur < x - 2)
	{
		putchar(middle_char);
		compteur++;
	}
	if (x > 1) //Printing the last 'o' (only if there are at least 2 columns, meaning x > 1)
	{
			putchar(side_char);
	}
	putchar('\n');
}

void    ft_putchar(char c)
{
	write(1, &c, 1);
}
