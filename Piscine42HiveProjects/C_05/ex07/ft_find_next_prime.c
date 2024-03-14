/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:24:13 by elucca            #+#    #+#             */
/*   Updated: 2024/02/28 18:29:22 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (i <= (nb / i) && i < 46341)
	{
		if (nb % i == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	int number;

	printf("Pick a number = ");
	scanf("%d", &number);
	printf("Next or equal %d  = %d\n", 
			number, ft_find_next_prime(number));
}
*/
