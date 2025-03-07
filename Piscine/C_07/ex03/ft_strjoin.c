
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
    *dest = '\0';
	return (dest);
}

char ft_strlen(char *str) 
{
  int p;

  p = 0;
  while (str[p])
    p++;
  return (p);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int total_size(int size, char **str, char *sep)
{
    int i;
    int size_strs;
    int size_sep;

    size_strs = 0;
    size_sep = 0;
    i = 0;
    while (i < size)
    {
        size_strs += ft_strlen(str[i]);
        i++;
    }
    size_sep += ft_strlen(sep);
    return (size_strs + (size_sep * (size -1)));
}

char *ft_strjoin(int size, char **str, char *sep)
{
    int i;
    int len;
    char *array;

    i = 0;
    len = total_size(size, str, sep);
    if (size <= 0)
    {
        array = malloc(sizeof(char) * 1);
        array[0] = '\0';
        return (array);
    }
    array = malloc(sizeof(char) * len + 1);
    if (!array)
        return (NULL);
    ft_strcpy(array, str[i]);
    while(++i < size)
    {
        ft_strcat(array, sep);
        ft_strcat(array, str[i]);
    }
    return (array); 
}

#include <stdio.h>

int main()
{
    char *strs[] = {"This", "that", "helena"};
    char *sep = "###";
    int size = 3;

    printf("%s", ft_strjoin(size, strs, sep));
}
