/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:33:27 by elucca            #+#    #+#             */
/*   Updated: 2024/02/23 10:53:57 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int main ()
{
	int x;
	int y;

	x = 55;
	y = 4;
	printf("x_before = %d, y_before = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("x_after = %d, y_after = %d\n", x, y);
}
*/
