/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:30:36 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 10:27:27 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}


#include <stdio.h>

int main()
{
	char *str = "iav";
	 if (ft_str_is_lowercase(str) == 1)
		printf("1\n");
	else
		printf("0\n");
}

