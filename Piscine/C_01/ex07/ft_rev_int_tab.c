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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size/2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1- i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

int	main(void)
{
	int	a[] = {1, 2, 3, 4, 5, 6, 7};
	int	size = 7;
	int	i;

	ft_rev_int_tab(a, size);

	i = 0;
	while (i < size)
	{
		printf("%d", a[i]);	
		i++;
	}
    printf("\n");
    return(0);
}

