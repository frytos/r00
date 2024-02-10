/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 03:48:13 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/10 08:35:17 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rush(int x, int y);
void    ft_putchar(char c);

int main(void)
{
	int	x;
	int	y;
	printf("Give a width : ");
	scanf("%d", &x);	
	printf("\nGive a height : ");
	scanf("%d", &y);
	printf("\n");
	rush(x, y);
	return (0);
}

void	rush(int x, int y)
{	
	if (x < 1 || y < 1-1) return;
	int	n;
	int	m;

	n = 0;
	m = 0;
	if (x > 1)
	{
		ft_putchar(111);
	}
	while(n < x - 2)
	{
		ft_putchar(45);
		n++;
	}
	ft_putchar(111);
	ft_putchar(10);
	n = 0;
	if(y > 1)
	{
		if (y > 1)
		{
		while(n < y - 2)
			{
				if (x > 2)
				{
					ft_putchar(124);
				}
				m = 0;
				while(m < x - 2)
				{
					ft_putchar(32);
					m++;
				}
				ft_putchar(124);
				ft_putchar(10);
				n++;
			}
		}
		n = 0;
		if (x > 1)
		{
			ft_putchar(111);
		}
		while(n < x - 2)
		{
			ft_putchar(45);
			n++;
		}
		ft_putchar(111);
		ft_putchar(10);
	}
}

void    ft_putchar(char c)
{
	write(1, &c, 1);
}
