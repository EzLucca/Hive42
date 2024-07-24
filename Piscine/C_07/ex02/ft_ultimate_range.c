/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:11:03 by elucca            #+#    #+#             */
/*   Updated: 2024/02/29 18:50:19 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*nb1;
	int 	i;
	int		len;

	i = 0;
	len = max - min;
	nb1 = (int *) malloc(sizeof(int) * len); 
	if (len < 0)
		return (0);
	while (i < len)
	{
		nb1[i] = min++;
		i++;
	}
	return (len);
}

int	main( )
{
	int *nb;

	nb = ft_ultimate_range(3, 13, 20);
	while (*nb)
	{
		printf("%d\n", *nb);
		nb++;
	}
}

