/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:22:10 by jlaine            #+#    #+#             */
/*   Updated: 2024/02/10 16:01:02 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	display(int x, int y, int l, int c);
void	rush(int x, int y);

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