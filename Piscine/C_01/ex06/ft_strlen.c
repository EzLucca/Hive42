/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:15:11 by elucca            #+#    #+#             */
/*   Updated: 2024/02/28 18:04:30 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_strlen(char *str) {
  int p;

  p = 0;
  while (str[p])
    p++;
  return (p);
}
/*
#include <stdio.h>
#include <unistd.h>

int main()
{
        char	*string1;
        string1 = "Exame today";

        printf("%d\n", ft_strlen(string1));
}
*/
