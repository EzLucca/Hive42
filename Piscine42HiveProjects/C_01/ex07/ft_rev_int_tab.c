/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:10:18 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 12:00:42 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *str, int size)
{
	int	i;
	int	temp;
	int array[size];

	i = 0;
	while (i < size/2)
	{
		temp = str[i];
		str[i] = str[size - 1- i];
		str[size - 1 - i] = temp;
		i++;
	}
	i = 0;
	while (i < size)
	{
		array[i] = str[i];
		printf("%d", array[i]);	
		i++;
	}
}

int	main(void)
{
	int	a[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	size = 8;

	ft_rev_int_tab(a, size);
//	printf("%d", ft_rev_int_tab(a, size));
}

