/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:45:48 by vkuznets          #+#    #+#             */
/*   Updated: 2024/02/17 18:54:31 by elucca           ###   ########.fr       */
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
	ft_putchar('A');
	while (i < k)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	middle_line(int x, int y, int z)
{
	int	count;
	int	c;
	int	f;

	f = y - 2;
	count = 0;
	while (count < f)
	{
		c = 0;
		ft_putchar('B');
		while (c < z)
		{
			ft_putchar(' ');
			c++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		count++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	z;

	i = 0;
	z = x - 2;
	if (x <= 0 || y <= 0)
		return ;
	ft_putchar('A');
	while (i < z)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
	if (y > 2)
		middle_line(x, y, z);
	if (y > 1)
		end_line(x);
}
