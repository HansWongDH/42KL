/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:33:26 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/08 16:25:03 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERT_MAP_C
# define FT_CONVERT_MAP_C

#include "ft.h"

#endif

int		ft_convert_map(t_vars vars)
{
	int i;
	int j;

	*vars.num_map = malloc(vars.row * sizeof(int *));

	i = 0;
	while (i < vars.row)
	{
		(vars.num_map)[i] = malloc(vars.col * sizeof(int));
		i++;
	}

	i = 0;
	while (i < vars.row)
	{
		j = 0;
		while (j < vars.col)
		{
			if(vars.map[i][j] == vars.empty)
				vars.num_map[i][j] = 1;
			else if (vars.map[i][j] == vars.obsticle)
				vars.num_map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (0);
}
