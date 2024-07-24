/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:38:37 by elucca            #+#    #+#             */
/*   Updated: 2024/02/23 10:33:25 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int main()
{
	int x;
	int y;

	x = 17;
	y = 89;
	printf("x_before = %d, y_before = %d\n", x, y);
	ft_swap(&x, &y);
	printf("x_after = %d, y_after = %d\n", x, y);
}
*/
