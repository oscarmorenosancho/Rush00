/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 08:39:25 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/14 09:14:24 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	int		x;
	int		y;

	if (argc < 3)
	{
		rush(5, 1);
		rush(1, 5);
		rush(1, 1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		rush(x, y);
	}
	return (0);
}
