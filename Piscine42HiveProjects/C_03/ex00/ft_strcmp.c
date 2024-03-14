/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:36:00 by elucca            #+#    #+#             */
/*   Updated: 2024/02/22 17:03:17 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (0);
	}
	return (0);
}
/*
int main()
{

	char	s1[] = "Hello from the piscine.";
	char	s2[] = "Hello from tie p";

	printf("ft_strcmp = %d\n", ft_strcmp(s1, s2));
	printf("strcmp = %d\n",strcmp(s1, s2));
}
*/
