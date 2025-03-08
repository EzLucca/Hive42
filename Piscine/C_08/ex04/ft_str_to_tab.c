
#include <stdlib.h>
#include "ft_stock_str.h"

char ft_strlen(char *str) {
    int p;

    p = 0;
    while (str[p])
        p++;
    return (p);
}

char	*ft_strdup(char	*src)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *) malloc (sizeof (char) * (ft_strlen (src) + 1));
	if (s1 == NULL)
		return (0);
	while (*src)
		s1[i++] = *src++;
	s1[i] = '\0';
	return (s1);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *stock;

    stock = malloc(sizeof(t_stock_str) * (ac + 1));
        if (!stock)
            return (NULL);
    i = 0;
    while (i < ac)
    {
    stock[i].size = ft_strlen(av[i]);
    stock[i].str = av[i];
    stock[i].copy = ft_strdup(av[i]);
    i++;
    }
    stock[i].size = 0;
    stock[i].str = NULL;
    stock[i].copy = NULL;
    return (stock);
}
