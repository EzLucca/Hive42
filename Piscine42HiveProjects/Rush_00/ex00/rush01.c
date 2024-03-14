/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:32:57 by elucca            #+#    #+#             */
/*   Updated: 2024/02/18 20:20:07 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character);

void	end_line(int x)
{
	int	k;
	int	i;

	i = 0;
	k = x - 2;
	ft_putchar('\\');
	while (i < k)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	middle_line(int x, int y)
{
	int	count;
	int	c;

	count = 0;
	while (count < y -2)
	{
		c = 0;
		ft_putchar('*');
		while (c < x - 2)
		{
			ft_putchar(' ');
			c++;
		}
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		count++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "Error...Only positive number are accepted. :)\n", 65);
		return ;
	}
	ft_putchar('/');
	while (i < x -2)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
	if (y > 2)
		middle_line(x, y);
	if (y > 1)
		end_line(x);
}
