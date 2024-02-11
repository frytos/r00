/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:22:10 by jlaine            #+#    #+#             */
/*   Updated: 2024/02/11 14:29:52 by argrouss         ###   ########.fr       */
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
	if ((l == 0 || l == y - 1) && (c == 0 || c == x - 1))
	{
		ft_putchar('o');
	}
	else if (l == 0 || l == y - 1)
	{
		ft_putchar('-');
	}
	else if (c == 0 || c == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
