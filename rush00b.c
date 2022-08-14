/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 08:41:15 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/14 09:50:35 by omoreno-         ###   ########.fr       */
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

//void	ft_print_line(int x, int b, char *const config)
void	ft_print_line(int x, char left, char mid, char right)
{
	//char	*b_c;

	//b_c = config + b * 3;
	//ft_putchar (b_c[0]); //imprimeixo el caracter de l'esquerra
	ft_putchar (left);
	if (x > 2)
	{:w
		//ft_put_n_chars (b_c[1], x - 2); //imprimeixo els caracters del mig
		ft_put_n_chars (mid, x - 2);
	}
	if (x > 1)
	{
		//ft_putchar (b_c[2]); // imprimeixo el caracter de la dreta
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
		//ft_print_line(x, 0, config);
		ft_print_line(x, config[0], config[1], config[2]);
		i = 1;
		while (i <= y - 2)
		{
			//ft_print_line(x, 1, config);
			ft_print_line(x, config[3], config[4], config[5]);
			i++;
		}
		if (y > 1)
		{
			//ft_print_line(x, 2, config);
			ft_print_line(x, config[6], config[7], config[8]);
		}
	}
	else
	{
		ft_putchar ('\n');
	}
}
