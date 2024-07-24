/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:01:49 by elucca            #+#    #+#             */
/*   Updated: 2024/02/29 19:24:50 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	ft_strlen(char *str)
{
	int	p;

	p = 0;
	while (*str++)
	{
		++p;
	}
	return (p);
}

char	*ft_strdup(char	*src)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *) malloc (sizeof (char) * (ft_strlen (src) + 1));
	if (s1 == NULL)
		return (0);
	while (*src)
		s1[i++] = *src++;
	s1[i] = '\0';
	return (s1);
}

int	main(int ac, char **av)
{
	char	*test1;
	char	*test2;

	if (ac == 2)
	{
		test1 = ft_strdup(av[1]);
		test2 = strdup(av[1]);
		printf(":%s:\n:%s:\n", test1, test2);
	}
	return (0);
}
