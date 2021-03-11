/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 00:06:46 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/11 16:47:14 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int index;
	int	*tab;

	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	index = 0;
	while (min < max)
	{
		tab[index] = min;
		min++;
		index++;
	}
	return (tab);
}
