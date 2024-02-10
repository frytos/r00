/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:58:33 by jlaine            #+#    #+#             */
/*   Updated: 2024/02/10 19:06:00 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_putchar.h"
#include "rush00.h"

void	rush(int x, int y);
void 	display(int x, int y, int c, int l);

void	display(int x, int y, int c, int l)
{
	if (l == 0 && ( c == 0 || x - c == 1 ))
	{
		ft_putchar('A');
	}
	else if (y - l == 1 && ( c == 0 || x - c == 1 ))
	{
		ft_putchar('C');
	}
	else if (l == 0 || c == 0 || x - c == 1 || y - l == 1)
	{
		ft_putchar('B');
	}
	else if (x - c == 0)
	{
		ft_putchar('\n');
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

	l = 0;
	while(l < y)
	{
		c = 0;
		while(c <= x)
		{
			display(x, y, c, l);
			c++;
		}
		l++;
	}
}

