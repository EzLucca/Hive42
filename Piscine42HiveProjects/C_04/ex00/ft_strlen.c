/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:16:36 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 19:33:59 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);	
	}
	else
		return (1 + ft_strlen(str + 1));
}

#include <string.h>
#include <stdio.h>

int main ()
{
	char *str = "Beija-flor";
	printf("%lu\n", strlen(str));
	printf("%d\n", ft_strlen(str));
}

