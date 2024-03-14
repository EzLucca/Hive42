/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:19:01 by elucca            #+#    #+#             */
/*   Updated: 2024/02/26 19:40:08 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + counter] == to_find[counter] && str[i + counter] != '\0')
		{
			counter++;
		}
		if (to_find[counter] == '\0')
		{
			return (str + i);
		}
		counter = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

	int	main()
	{
		char str[] = "This and That";
		char to_find[] = "an";

		printf("strstr= %s\n", strstr(str, to_find));
		printf("ft_strstr= %s\n", ft_strstr(str, to_find));
	}
*/
