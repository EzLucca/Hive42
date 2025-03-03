#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*nb1;
	int 	i;
	int		len;

	i = 0;
	len = max - min;
	nb1 = malloc(sizeof(int) * len); 
    if (!nb1)
        return (NULL);
	if (len < 0)
		return (NULL);
	while (i < len)
	{
		nb1[i] = min++;
		i++;
	}
	return (nb1);
}

int	main( )
{
	int *nb;

	nb = ft_range(3, 13);
	while (*nb)
	{
		printf("%d\n", *nb);
		nb++;
	}
}

