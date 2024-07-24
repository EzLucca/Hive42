/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:04:13 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 11:50:21 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main()
{

char	s1[] = "12345";
char	s2[] = "12345678";

printf("ft_strncmp = %d\n", ft_strncmp(s1, s2, 7));
printf("strncmp = %d\n",strncmp(s1, s2, 7));
}

