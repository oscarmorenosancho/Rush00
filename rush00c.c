/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 08:41:15 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/14 10:16:37 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_n_chars(char c, int reps)
{
	int	i;

	i = 0;
	while (i < reps)
	{
		ft_putchar(c);
		i++;
	}
}

void	ft_print_line(int x, char left, char mid, char right)
{
	ft_putchar (left);
	if (x > 2)
	{
		ft_put_n_chars (mid, x - 2);
	}
	if (x > 1)
	{
		ft_putchar (right);
	}
	ft_putchar ('\n');
}	

void	rush(int x, int y)
{
	char	*config;
	int		i;

	if (! (x < 1 || y < 1))
	{
		config = "o-o| |o-o";

		/*ft_print_line(x, config[0], config[1], config[2]);
		i = 1;
		while (i <= y - 2)
		{
			ft_print_line(x, config[3], config[4], config[5]);
			i++;
		}
		if (y > 1)
		{
			ft_print_line(x, config[6], config[7], config[8]);
		}*/
		i = 0;
		while (i < y)
		{
			char lef;
			char mid;
			char rig;
			if (i == 0)
			{
				lef = config[0]; 
				mid = config[1];
				rig = config[2];
			}
			else if (i != y -1)
			{
				lef = config[3];
				mid = config[4];
				rig = config[5];
			}
			else
			{
				lef = config[6];
				mid = config[7];
				rig = config[8];
			}
			ft_print_line(x, lef, mid, rig);
			i++;
		}
	}
	else
	{
		ft_putchar ('\n');
	}
}
