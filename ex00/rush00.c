/* ************************************************************************** */
/*                                                                            */
/*   rush00.c                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 03:48:13 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/10 04:23:29 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

void	rush(int x, int y)
{
	int	n;

	n = 0;
	ft_putchar(111);
	while(n < width - 2)
	{
		ft_putchar(45);
		n++
	}
	if(x > 2)
	{
		ft_putchar(111);
	}
	n = 0;
	while(n < y)
	{
		ft_putchar(45);
		while(n < width-2)
		{
			ft_putchar(45);
		}
		ft_putchar(45);
		n++;
	}
	ft_putchar(111);
	n = 0;
        while(n < width - 2)
        {
		ft_putchar(45);
        	n++;
	}
        if (x > 2)
        {
                 ft_putchar(111);
        }
}
