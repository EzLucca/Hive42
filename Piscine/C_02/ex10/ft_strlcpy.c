#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) 
{
  unsigned int len;

  len = ft_strlen(src);

    if (size == 0)
        return (len);
	while (*src && (size - 1) > 0)
        { 
		*dest = *src;
		dest++;
		src++;
        size--;
	}
    *dest = '\0';
    return (len);
}


int main() {
  char *origin;
  char destin[50];
  char destin2[50];

  origin = "solkdiliinhelena";
  printf(" %d\n", strlcpy(destin, origin, 5));
  ;
  printf(" %d\n", ft_strlcpy(destin2, origin, 5));
}
