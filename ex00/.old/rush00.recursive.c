/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.recursive.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:36:06 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/10 20:00:19 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include <stdio.h>
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
	char *line;


}

const char *get_line(int x, char outer_char, char inside_char)
{
	int	n;
	char	*line;

	char[0] = outer_char;
	char[x - 1] = outer_char;
	n = 1;
	while(n < x - 1)
	{
		char[n] = inside_char;
		n++;
	}


	return &char; ???
}
