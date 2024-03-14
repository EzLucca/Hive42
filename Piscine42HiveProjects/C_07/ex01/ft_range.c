/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 08:24:56 by elucca            #+#    #+#             */
/*   Updated: 2024/02/29 17:12:06 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
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
	return (nb1);
}

int	main( )
{
	int *nb;

	nb = ft_range(3, 13);
	while (*nb)
	{
		printf("%d\n", *nb);
		nb++;
	}
}

