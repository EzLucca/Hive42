/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:47:39 by elucca            #+#    #+#             */
/*   Updated: 2024/02/28 16:57:26 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb != 0)
	{
		nb *= ft_recursive_factorial(nb - 1);
		return (nb);
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	int number;

	scanf("%d", &number);
	printf("%d Fatorial = %d\n",number, ft_recursive_factorial(number));
}
*/
