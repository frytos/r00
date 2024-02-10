/* ************************************************************************** */
/*                                                                            */
/*   rush00.main.c                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*   By: ftrebuti <ftrebuti@student.42.fr>            +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 02:38:49 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/10 20:47:39 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.clean.c"

int	main(void)
{
	rush(5, 5);
	rush(4, 6);
	rush(8, 3);
	rush(2, 4);
	rush(5, 1);
        rush(1, 3);
	rush(0, 6);
	rush(8, 0);
	rush(-4, 6);
	rush(8, -3);
	rush(-5, -5);
	return (0);
}
