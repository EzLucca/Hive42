/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:24:55 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 11:54:09 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j])
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
	char	dest[30] = "This and ";
	char	src[] = "Thatissssss";
	char	dest1[30] = "This and ";

	printf("strcat = %s\n", strcat(dest1, src));
	printf("ft_strcat = %s\n", ft_strcat(dest, src));
}

