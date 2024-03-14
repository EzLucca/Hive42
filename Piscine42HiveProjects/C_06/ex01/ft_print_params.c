/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:36:17 by elucca            #+#    #+#             */
/*   Updated: 2024/02/28 13:57:30 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char **argv)
{
	int	p;
	int	i;

	p = 0;
	i = 1;
	while (argc != i)
	{
		while (argv[i][p] != '\0')
		{
			++p;
		}
		write(1, argv[i], p);
		write(1, "\n", 1);
		p = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
