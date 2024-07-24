/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:55:30 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 11:57:29 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[30] = "This and ";
	char src[] = "Thatissssss";
	char dest1[30] = "This and ";

	printf("strncat = %s\n", strncat(dest1, src, 2));
	printf("ft_strncat = %s\n", ft_strncat(dest, src, 2));
}

