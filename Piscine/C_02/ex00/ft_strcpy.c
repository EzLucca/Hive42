/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:55:06 by elucca            #+#    #+#             */
/*   Updated: 2024/02/23 11:40:12 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
    *dest = '\0';
	return (dest);
}

#include <stdio.h>

int main()
{
	char	*string;
	char	destin[50];
	char	destin2[50];

	string = "beijaflor";
	ft_strcpy(destin, string);
	printf("%s\n",destin);
    strcpy(destin2, string);
	printf("%s\n",destin2);
}
