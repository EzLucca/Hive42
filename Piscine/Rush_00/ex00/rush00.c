/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:42:54 by elucca            #+#    #+#             */
/*   Updated: 2024/02/18 20:19:04 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character);

void	end_line(int width)
{
	int	k;
	int	i;

	i = 0;
	k = width - 2;
	ft_putchar('o');
	while (i < k)
	{
		ft_putchar('-');
		i++;
	}
	if (width > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	middle_line(int width, int height, int z)
{
	int	count;
	int	c;
	int	f;

	f = height - 2;
	count = 0;
	while (count < f)
	{
		c = 0;
		ft_putchar('|');
		while (c < z)
		{
			ft_putchar(' ');
			c++;
		}
		if (width > 1)
			ft_putchar('|');
		ft_putchar('\n');
		count++;
	}
}

void	rush(int width, int height)
{
	int	i;
	int	z;

	i = 0;
	z = width - 2;
	if (!(width <= 0 || height <= 0))
	{
		ft_putchar('o');
		while (i < z)
		{
			ft_putchar('-');
			i++;
		}
		if (width > 1)
			ft_putchar('o');
		ft_putchar('\n');
		if (height > 2)
			middle_line(width, height, z);
		if (height > 1)
			end_line(width);
	}
	else
		write(1, "error...I only accept positive numbers. :)", 42);
	ft_putchar('\n');
}
