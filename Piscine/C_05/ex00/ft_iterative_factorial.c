/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:54:34 by elucca            #+#    #+#             */
/*   Updated: 2024/02/27 20:54:37 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	iterative;

	iterative = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		iterative = nb * iterative;
		nb--;
	}
	return (iterative);
}
/*
#include <stdio.h>

int main()
{
int number;

scanf("%d", &number);
printf("%d Fatorial = %d\n",number, ft_iterative_factorial(number));
}
*/
