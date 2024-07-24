/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:55:58 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 13:24:26 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	i;

	i = 1;
	while (argc != 1)
	{
		ft_strcmp(argv[i], argv[i + 1]);
		argc--;
	}
	ft_sort_params(argc, argv);
	return (0);
}
