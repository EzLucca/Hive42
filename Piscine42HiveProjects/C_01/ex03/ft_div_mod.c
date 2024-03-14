/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 19:13:30 by elucca            #+#    #+#             */
/*   Updated: 2024/02/23 10:34:58 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>

int main ()
{
	int a;
	int b;
	int div;
	int mod;

	a = 55;
	b = 4;

	printf("a_o = %d, b_o %d, *div_o = %d, *mov_o = %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a_n = %d, b_n %d, *div_n = %d, *mod_n = %d\n", a, b, div, mod);
}
*/
