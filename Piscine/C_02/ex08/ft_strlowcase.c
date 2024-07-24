/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:32:09 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 10:28:03 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*set;

	set = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (set);
}

#include <stdio.h>

int main()
{
	char	str[] = "ADGLKJS";

	printf("%s\n", ft_strlowcase(str));
	return (0);
}

