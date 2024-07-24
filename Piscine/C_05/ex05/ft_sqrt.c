/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:10:21 by elucca            #+#    #+#             */
/*   Updated: 2024/02/29 08:17:20 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb == 0)
		return (0);
	while (sqrt != (nb / sqrt))
	{
		if (sqrt > 46340)
			return (0);
		sqrt++;
	}
	if ((sqrt * sqrt) != nb)
		return (0);
	return (sqrt);
}
/*
#include <stdio.h>

int main()
{
	int number;

	printf("Pick a number = ");
	scanf("%d", &number);
	//	printf("Pick a power = ");
	//	scanf("%d", &power);
	printf("%d sqrt = %d\n", number, ft_sqrt(number));
}
*/
