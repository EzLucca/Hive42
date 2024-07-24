/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:16:02 by elucca            #+#    #+#             */
/*   Updated: 2024/02/27 16:32:07 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	number;
	int	signal;

	number = 0;
	signal = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += (*str - 48);
		++str;
	}
	if ((signal % 2) == 0)
		return (number);
	return (-number);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;

	str = "    a12346ab567";
	printf("ft_atoi = %d\n", ft_atoi(str));
	printf("atoi = %d\n", atoi(str));
	return (0);
}
*/
