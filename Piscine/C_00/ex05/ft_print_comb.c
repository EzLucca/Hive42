/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 08:35:12 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 08:45:18 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchared(char a, char b, char c)
{
    write (1, &a, 1);
    write (1, &b, 1);
    write (1, &c, 1);
    if (a != '7' || b != '8' || c != '9') 
    {
        write (1, ",", 1);
        write (1, " ", 1);
    }
}

void ft_print_comb(void) 
{
    char a;
    char b;
    char c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8') 
        {
            c = b + 1;
            while (c <= '9') 
            {
                ft_putchared(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}

int	main(void)
{
    ft_print_comb();
    return(0);
}

