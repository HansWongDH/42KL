/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:42:10 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/03 23:18:30 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int	count;

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

int		ft_same_match(char *base, char match)
{
	int	index;

	index = 0;
	if (ft_base_valid(base) == 1)
	{
		while (base[index])
		{
			if (base[index] == match)
				return (index);
			index++;
		}
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int numbers;
	int sign;
	int i;
	int match;
	int	rad;

	numbers = 0;
	sign = 1;
	i = 0;
	rad = ft_strlen(base);
	while (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((match = ft_same_match(base, str[i])) != -1)
	{
		numbers = (numbers * rad) + match;
		i++;
	}
	return (numbers * sign);
}
