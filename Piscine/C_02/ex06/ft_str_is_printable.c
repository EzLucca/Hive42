/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:31:07 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 10:27:44 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!((*str >= 32 && *str <= 127)))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char str[] = {49, 106, 87};
	if (ft_str_is_printable(str) == 1)
		printf("1\n");
	else
		printf("0\n");
}
*/
