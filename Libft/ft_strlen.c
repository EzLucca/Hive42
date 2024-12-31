char ft_strlen(char *str)
{
	int	p;

	p = 0;
	while (*str++)
		++p;
	return (p);
}
