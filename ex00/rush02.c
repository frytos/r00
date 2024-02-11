/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:58:33 by jlaine          #+#    #+#             */
/*   Updated: 2024/02/11 13:01:01 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);
void	display(int x, int y, int c, int l);

void	rush(int x, int y)
{
	int	l;
	int	c;

	if (x > 0 && y > 0)
	{
		l = 0;
		c = 0;
		while (l < y)
		{
			c = 0;
			while (c < x)
			{
				display(x, y, c, l);
				c++;
			}
			ft_putchar(10);
			l++;
		}
	}
}

void	display(int x, int y, int c, int l)
{
	if (l == 0 && (c == 0 || x - c == 1))
	{
		ft_putchar('A');
	}
	else if (y - l == 1 && (c == 0 || x - c == 1))
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
