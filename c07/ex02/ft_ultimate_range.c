/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:13:54 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/11 00:21:55 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int index;
	int size;

	size = max - min;
	index = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if ((tab = malloc(sizeof(int) * size)) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (min < max)
	{
		tab[index] = min;
		min++;
		index++;
	}
	return (size);
}
