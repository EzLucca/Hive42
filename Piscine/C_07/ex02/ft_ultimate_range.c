#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int 	i;
	int		len;

	i = 0;
	len = max - min;
	*range= malloc(sizeof(int) * len); 
    if (!(*range))
        return (-1);
	if (len < 0)
		return (NULL);
	while (i < len)
	{
		*range[i] = min++;
		i++;
	}
	return (len);
}

int	main( )
{
	int *nb;

	nb = ft_ultimate_range(3, 13, 20);
	while (*nb)
	{
		printf("%d\n", *nb);
		nb++;
	}
}

