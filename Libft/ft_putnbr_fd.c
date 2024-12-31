#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
	char	value;

	value = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		value = n % 10 + 48;
		write(fd, &value, 1);
	}
}
