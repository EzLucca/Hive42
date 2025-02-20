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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

    if (!tab || size <2)
        return ;

	i = 0;
	while (i < size -1)
	{
        if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
            i = 0;
		}
        else
		    i++;
	}
}

int	main(void)
{
	int	a[] = {6, 5, 2, 4, 1, 3, 8, 7};
	int	size = 8;
    int i;

	ft_sort_int_tab(a, size);

	i = 0;
	while (i < size)
	{
		printf("%d", a[i]);	
		i++;
	}
	printf("\n");	
}

