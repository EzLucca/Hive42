/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:59:00 by elucca            #+#    #+#             */
/*   Updated: 2024/02/25 19:20:21 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		ret;
	int		m_count;
	ret = 0;
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (ret);
}

void ft_putnbr_base(int nbr, char *base)
{
	int baseValue;

	baseValue = 0;

	while (base[baseValue])
	{
		if (base[baseValue] == '+' || base[baseValue] == '-')
			return;
		++baseValue;
	}
	if (baseValue < 2)
		return;
	if (doubleChar(base))
		return;

}

int main()
{
	int	n;
	char	*base;

	n = ft_atoi(argv[1]);
	base = argv[2];
	ft_putnbr_base(n, base);
}
