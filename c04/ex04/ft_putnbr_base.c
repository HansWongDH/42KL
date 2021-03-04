/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:36:48 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/04 00:00:29 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int		ft_check_repeat(char *base)
{
	int i;
	int j;
	int valid;

	valid = 1;
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				valid = 0;
			j++;
		}
		i++;
	}
	return (valid);
}

int		ft_base_valid(char *base)
{
	int i;
	int valid;

	valid = 1;
	valid = ft_check_repeat(base);
	if (base == 0 || ft_strlen(base) <= 1)
		valid = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			valid = 0;
		i++;
	}
	return (valid);
}

void	ft_putnbr_recur(int nb, char *base, int rad)
{
	if (nb == -2147483648)
	{
		ft_putnbr_recur(nb / rad, base, rad);
		write(1, &(base[-(nb % rad)]), 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_recur(-nb, base, rad);
		return ;
	}
	if (nb > rad - 1)
		ft_putnbr_recur(nb / rad, base, rad);
	write(1, &(base[nb % rad]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	rad;

	rad = ft_strlen(base);
	if (ft_base_valid(base) == 1)
		ft_putnbr_recur(nbr, base, rad);
}
