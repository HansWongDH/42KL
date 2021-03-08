/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxue-qia <cxue-qia@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:55:02 by cxue-qia          #+#    #+#             */
/*   Updated: 2021/03/08 12:57:08 by cxue-qia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zach.h"

static char *g_map;

static int	valid_metadata(void)
{
	int		i;
	int		ret;
	char	*map2;

	ret = 1;
	map2 = g_map;
	if (*(map2 + 1) == *(map2 + 2) ||
			*(map2 + 1) == *(map2 + 3) ||
			*(map2 + 2) == *(map2 + 3))
		ret = 0;
	if (*(map2 + 4) != '\n')
		ret = 0;
	i = 1;
	while (i < 4)
	{
		if (!(map2[i] >= ' ' && map2[i] <= '~'))
			ret = 0;
		i++;
	}
	return (ret);
}

static int	map_is_same_length(void)
{
	int		i;
	char	*map2;
	int		ret;

	i = 0;
	map2 = g_map + 5;
	ret = 1;
	while (i < g_row)
	{
		if (map2[(i * (g_col + 1)) + g_col] != '\n')
			ret = 0;
		i++;
	}
	return (ret);
}

static int	has_one_line_one_box(void)
{
	return (g_row > 0 && g_col > 0);
}

static int	is_valid_character(void)
{
	int		i;
	int		j;
	char	*map2;
	int		ret;

	i = 0;
	map2 = g_map + 5;
	ret = 1;
	while (i < g_row)
	{
		j = 0;
		while (j < g_col)
		{
			if (map2[i * g_col + j] == g_map[1] ||
					map2[i * g_col + j] == g_map[2] ||
					map2[i * g_col + j] == g_map[3] ||
					map2[i * g_col + j] == '\n')
				j++;
			else
				ret = 0;
		}
		i++;
	}
	return (ret);
}

int			validate_map(char *map_data)
{
	extern char	*g_map;
	extern int	g_row;
	extern int	g_col;

	g_map = map_data;
	if (valid_metadata())
	{
		g_row = get_row(map_data);
		g_col = get_col(map_data);
	}
	else
		return (-1);
	if (map_is_same_length() &&
				has_one_line_one_box() &&
				is_valid_character())
		return (1);
	else
		return (0);
}
