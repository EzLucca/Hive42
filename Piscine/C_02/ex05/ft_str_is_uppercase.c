/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:30:53 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 10:27:35 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char *str = "ASDF";
	if (ft_str_is_uppercase(str) == 1)
		printf("1\n");
	else
		printf("0\n");
}
*/
