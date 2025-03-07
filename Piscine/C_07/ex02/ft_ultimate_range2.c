
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int len;
    int *array;

    i = 0;
    len = max - min;
    if (len <= 0)
    {
        *range = NULL;
        return (0);
    }
    array = malloc(sizeof(int) * len);
    if(!range)
        return (-1);
    *range = array;
    while (min < max)
    {
        array[i] = min++;
        i++;
    }
    return (len);
}

#include <stdio.h>

int	main( )
{
	int nb;
    int *ptr;

	nb = ft_ultimate_range(&ptr, 13, 20);
    printf("%d\n", nb);
    free(ptr);
}

