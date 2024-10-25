/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:53:22 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 10:16:45 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*src && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char	*origin; 
	char	destin[50]; 

	origin = "sol";
	printf(" %s\n",destin);
	ft_strncpy(destin, origin, 5);
	printf(" %s\n",destin);
}
*/
