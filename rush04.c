/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:14:48 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/13 15:16:49 by omoreno-         ###   ########.fr       */
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

void	ft_print_line(int x, int b, char *const config)
{
	char	*b_c;

	b_c = config + b * 3;
	ft_putchar (b_c[0]);
	if (x > 2)
	{
		ft_put_n_chars (b_c[1], x - 2);
	}
	if (x > 1)
	{
		ft_putchar (b_c[2]);
	}
	ft_putchar ('\n');
}	

void	rush(int x, int y)
{
	char	*config;
	int		i;

	if (! (x < 1 || y < 1))
	{
		config = "ABCB BCBA";
		ft_print_line(x, 0, config);
		i = 1;
		while (i <= y - 2)
		{
			ft_print_line(x, 1, config);
			i++;
		}
		if (y > 1)
		{
			ft_print_line(x, 2, config);
		}
	}
	else
	{
		ft_putchar ('\n');
	}
}
