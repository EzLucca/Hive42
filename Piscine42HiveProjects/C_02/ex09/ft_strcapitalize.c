/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:49:10 by elucca            #+#    #+#             */
/*   Updated: 2024/02/23 11:57:08 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*set;
	char	*final;

	set = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	final = set;
	while (*final)
	{
		if (*final == ' ')
		{
			final++;
			final + 1 -= 32;
		}
		set++;
	}
	return (final);
}
/*
#include <stdio.h>

int main()
{
char	str[];
str = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

printf("%s\n", ft_strcapitalize(str));
return (0);
}
*/
