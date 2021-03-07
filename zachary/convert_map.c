/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxue-qia <cxue-qia@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:24:04 by cxue-qia          #+#    #+#             */
/*   Updated: 2021/03/07 18:26:50 by cxue-qia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "zach.h"

char	**allocate_map_arr(char *map_data)
{
	int			i;
	extern int	g_row;
	extern int	g_col;
	char		**map_array;

	if (!validate_map(map_data))
	{
		ft_putstr("map error\n");
		return (-1);
	}
	else
	{
		map_array = malloc(g_row * sizeof(char *));
		i = 0;
		while (i < g_row)
		{
			map_array[i] = malloc(g_col * sizeof(char));
			i++;
		}
	}
	return (map_array);
}

char	**write_map_arr(char **map_array, char *map_data)
{
	int		i;
	int		j;
	char	*map2;

	i = 0;
	map2 = map_data + 5;
	while (i < g_row)
	{
		j = 0;
		while (j < g_col)
		{
			if (map_data[i * g_col + j] != '\n')
				map_array[i][j] = map_data[i * g_col + j];
			j++;
		}
		i++;
	}
	return (map_array);
}
