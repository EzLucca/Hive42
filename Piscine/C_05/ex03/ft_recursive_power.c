/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:37:16 by elucca            #+#    #+#             */
/*   Updated: 2024/02/28 08:30:33 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (nb != 0 && power > 0)
		result = nb * ft_recursive_power(nb, (power -1));
	return (result);
}
/*
#include <stdio.h>

int main()
{
	int number;
	int power;

	printf("Pick a number = ");
	scanf("%d", &number);
	printf("Pick a power = ");
	scanf("%d", &power);
	printf("%d powered to %d = %d\n", number, power, 
			ft_recursive_power(number, power));
}
*/
