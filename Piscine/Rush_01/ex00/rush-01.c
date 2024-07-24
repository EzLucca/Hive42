/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:53:22 by elucca            #+#    #+#             */
/*   Updated: 2024/02/25 20:06:24 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_atoi(char* str)
{
	int res;
	res = 0;
	for (int i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i]  -'0';
	return (res);
}
int	main(int argc, char *argv[])
{
	/*
	   if (argc != 2)
	   {
	   write(1, "Error\n", 5);
	   return(0);
	   }
	   for (int i = 0; i < argc; i++)
	   {
	   int i, n;
	   int array[];

	   n = 0;
	   for (i =- ; argv[i] >= '0' && argv[i] <= '9'; i++)
	   {
	   n = 10 * n + (argv[i] - '0');
	   array[i] = n
	   }
	   printf("argv[%d] = %s\n", i, array[i]);
	   printf("argv[%d] = %s\n", i, argv[i]);
	   }
	   return (0);
	   */

	char str[] = "8 3 2 3 4 5 9";

	int val = ft_atoi(str);
	printf("%d\n", val);
	return (0);
}
