/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:22:10 by jlaine            #+#    #+#             */
/*   Updated: 2024/02/10 16:01:02 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "rush00.h"

void	ft_putchar(char c);
void	display(int x, int y, int l, int c);
void	rush(int x, int y);

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


void	display(int x, int y, int l, int c)
{
	if ((l == 0 || l == x - 1) && (c == 0 || c == y - 1))
	{
		ft_putchar('o');
	}
	else if (l == 0 || l == x - 1)
	{
		ft_putchar('-');
	}
	else if (c == 0 || c == y - 1)
	{
		ft_putchar('|');
	}
	else 
	{
		ft_putchar(' ');
	}

}

void	rush(int x, int y)
{
	int l;
	int c;
	char is_nl;

	l = 0;
	c = 0;
	while (l < x)
	{
		is_nl = 0;
		while (c < y)
		{
			display(x, y, l, c);
			is_nl = '\n';
			c++;
		}
		ft_putchar(is_nl);
		c = 0;
		l++;
	}
}

void    ft_putchar(char c)
{
	write(1, &c, 1);
}
