
#include <unistd.h>
#include <stdio.h>

int    check_alphanumeric (char alnr)
{
    if((alnr >= '0' && alnr <= '9') ||
        (alnr >= 'a' && alnr <= 'z') ||
        (alnr >= 'A' && alnr <= 'Z'))
    {
        return (1);
    }
    return (0);
}
char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z' && (i != 0 && check_alphanumeric(str[i - 1]) == 1))
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' && (i == 0 || check_alphanumeric(str[i - 1]) == 0))
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char	str[] = "salut, com:ment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s\n", ft_strcapitalize(str));
    return (0);
}
