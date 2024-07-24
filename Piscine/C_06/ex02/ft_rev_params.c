/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:36:18 by elucca            #+#    #+#             */
/*   Updated: 2024/02/28 13:57:50 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char **argv)
{
	int	p;
	int	i;
	int	count;

	p = 0;
	i = 1;
	count = argc - 1;
	while (argc != i)
	{
		while (argv[count][p] != '\0')
		{
			++p;
		}
		write(1, argv[count], p);
		write(1, "\n", 1);
		p = 0;
		i++;
		count--;
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
