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
    while (*src && size > 1)
    { 
        *dest = *src;
        dest++;
        src++;
        size--;
    }
    *dest = '\0';
    return (len);
}
/*
int main() {
  char *origin;
  char destin[50];
  char destin2[50];

  origin = "solkdiliinhelena";
  printf(" %d\n", strlcpy(destin, origin, 5));
  printf(" %d\n", ft_strlcpy(destin2, origin, 5));
}
*/
#include <stdio.h>
#include <string.h>

// Declaração das funções implementadas

int main()
{
    char src[] = "Hello, World!";
    char dest1[20];
    char dest2[20];

    unsigned int size = 10;

    // Chamando ft_strlcpy
    unsigned int len1 = ft_strlcpy(dest1, src, size);
    // Chamando a strlcpy original
    unsigned int len2 = strlcpy(dest2, src, size);

    // Imprimindo os resultados
    printf("Original:  len = %u, dest = \"%s\"\n", len2, dest2);
    printf("ft_strlcpy: len = %u, dest = \"%s\"\n", len1, dest1);

    // Teste com tamanho 0
    char dest3[20] = "unchanged";
    char dest4[20] = "unchanged";

    len1 = ft_strlcpy(dest3, src, 0);
    len2 = strlcpy(dest4, src, 0);

    printf("\nTeste com size = 0:\n");
    printf("Original:  len = %u, dest = \"%s\"\n", len2, dest4);
    printf("ft_strlcpy: len = %u, dest = \"%s\"\n", len1, dest3);

    // Teste com string vazia
    char empty[] = "";
    char dest5[10] = "unchanged";
    char dest6[10] = "unchanged";

    len1 = ft_strlcpy(dest5, empty, sizeof(dest5));
    len2 = strlcpy(dest6, empty, sizeof(dest6));

    printf("\nTeste com string vazia:\n");
    printf("Original:  len = %u, dest = \"%s\"\n", len2, dest6);
    printf("ft_strlcpy: len = %u, dest = \"%s\"\n", len1, dest5);

    return 0;
}

