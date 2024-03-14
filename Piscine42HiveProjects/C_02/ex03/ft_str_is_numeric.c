/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:43:51 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 10:22:20 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!((*str >= '0' && *str <= '9')))
			return (0);
		str++;
	}
	return (1);
}


#include <stdio.h>

int main()
{
	char *str = "4333z3";
	if (ft_str_is_numeric(str) == 1)
		printf("1\n");
	else
		printf("0\n");
}

