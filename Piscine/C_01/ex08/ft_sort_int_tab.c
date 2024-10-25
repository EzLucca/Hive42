/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:45:42 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 12:05:42 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *str, int size)
{
	int	i;
	int j;
	int	temp;
	int array[size];

	i = 0;
	while (i < size)
	{
		j = i;
		while ((str[j] < str[j - 1]) && j > 0)
		{
			temp = str[j];
			str[j] = str[j - 1];
			str[j - 1] = temp;
			j--;
		}
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
/*
int	main(void)
{
	int	a[] = {6, 5, 2, 4, 1, 3, 8, 7};
	int	size = 8;

	ft_sort_int_tab(a, size);
}
*/
