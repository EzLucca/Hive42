/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:04:09 by elucca            #+#    #+#             */
/*   Updated: 2024/02/27 16:24:15 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	int number;

	printf("Pick a number = ");
	scanf("%d", &number);
	//	printf("Pick a power = ");
	//	scanf("%d", &power);
	printf("0 for non prime and 1 for prime\nthe number %d  = %d\n", 
	number, ft_is_prime(number));
}
*/
