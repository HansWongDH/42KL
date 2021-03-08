/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxue-qia <cxue-qia@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:24:04 by cxue-qia          #+#    #+#             */
/*   Updated: 2021/03/08 15:07:40 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "zach.h"
#include <stdio.h>//TEMP

int	allocate_map_arr(char ***map_array, char *map_data)
{
	int			i;
	extern int	g_row;
	extern int	g_col;
	if (!validate_map(map_data))
	{
		ft_putstr("map error\n");
		return (-1);
	}
	else
	{
		*map_array = malloc(g_row * sizeof(char *));
		i = 0;
		while (i < g_row)
		{
			(*map_array)[i] = malloc(g_col * sizeof(char));
			i++;
		}
	}
	return (1);
}

char	**write_map_arr(char **map_array, char *map_data)
{
	int			i;
	int			j;
	int			offset;
	char		*map2;

	i = 0;
	offset = 0;
	map2 = map_data + 5;
	printf("%s\n", map2);
	while (i < g_row)
	{
		j = 0;
		while (j < g_col)
		{
			if (map2[i * g_col + j + offset] == '\n')
				offset++;
			map_array[i][j] = map2[i * g_col + j + offset];
			j++;
		}
		i++;
	}
	return (map_array);
}
