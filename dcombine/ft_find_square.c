/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:26:53 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/08 16:12:45 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIND_SQUARE_C
# define FT_FIND_SQUARE_C

#include "ft.h"

#endif

int		ft_min(t_vars vars, int i, int j)
{
	int min;

	min = vars.num_map[i - 1][j - 1];
	if (vars.num_map[i - 1][j] < min)
		min = vars.num_map[i - 1][j];
	if (vars.num_map[i][j - 1] < min)
		min = vars.num_map[i][j - 1];
	return (min);
}

int		ft_find_square(t_vars vars)
{
	int max;
	int i;
	int j;
	
	max = 0;
	if (vars.size < 0) //????
		return (0);
	i = 1;
	while (i < vars.row)
	{
		j = 1;
		while (j < vars.col)
		{
			if (vars.num_map[i - 1][j - 1] >= 0 && vars.num_map[i][j] != 0)
				vars.num_map[i][j] = 1 + (ft_min(vars, i, j));
			if (max < vars.num_map[i][j])
				max = vars.num_map[i][j];
			j++;
		}
		i++;		
	}
	return (max);
}

void	ft_fill_square(t_vars vars)
{
	int i;
	int j;
	int width;
	int height;
	int flag;

	i = -1;
	while (++i < vars.row && flag != 0)
	{
		j = -1;
		while (++j < vars.col && flag != 0)
		{
			if (vars.num_map[i][j] == vars.max)
			{
				width = -1;
				while (++width < vars.max)
				{
					height  = -1;
					while (++height < vars.max)
						vars.map[i - height][j - width] = vars.full;
				}
				flag = 0;
			}
		}
	}
}
