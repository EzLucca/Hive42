
#include <unistd.h>
#include "ft_stock_str.h"

void    ft_putnbr(int nb)
{
    char numero;

    if (nb == -2147483648)
    {
        write (1,"-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    numero = nb % 10 + 48;
    write(1, &numero, 1);
}

void ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].size)
    {
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}

int main(int ac, char **av)
{
    ft_show_tab(ft_strs_to_tab(ac, av));
}
