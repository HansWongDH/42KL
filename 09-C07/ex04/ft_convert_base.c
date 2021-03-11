/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:30:42 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/11 14:38:04 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		ft_base_valid(char *base);
int		ft_atoi_base(char *str, char *base);

int		ft_convert_len(unsigned int nb, int radix, int sign)
{
	int len;

	if (sign < 0)
		len = 1;
	else
		len = 0;
	while (true)
	{
		len++;
		if (nb / radix == 0)
			break ;
		nb /= radix;
	}
	return (len);
}

char	*ft_malloc(char *base, unsigned int nb, int sign)
{
	int		i;
	int		radix;
	int		len;
	char	*str;
	int		mod;

	radix = ft_strlen(base);
	len = ft_convert_len(nb, radix, sign);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = -1;
	if (sign < 0)
	{
		str[0] = '-';
		i = 0;
	}
	mod = len - 1;
	while (mod > i)
	{
		str[mod] = base[nb % radix];
		nb /= radix;
		mod--;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sign;
	int		nb;

	if (!ft_base_valid(base_from) || !ft_base_valid(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
	{
		sign = -1;
		nb *= sign;
	}
	else
		sign = 1;
	return (ft_malloc(base_to, nb, sign));
}
