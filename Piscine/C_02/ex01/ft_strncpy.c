/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:53:22 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 10:16:45 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
	return (dest);
}

int main()
{
	char	*origin; 
	char	destin[50]; 
	char	destin2[50]; 

	origin = "sol";
	ft_strncpy(destin, origin, 5);
	printf(" %s\n",destin);
	strncpy(destin2, origin, 5);
	printf(" %s\n",destin2);

}

