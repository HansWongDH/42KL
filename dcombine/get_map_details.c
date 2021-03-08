/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_details.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxue-qia <cxue-qia@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:22:30 by cxue-qia          #+#    #+#             */
/*   Updated: 2021/03/08 12:16:03 by cxue-qia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zach.h"

int	get_row(char *map_data)
{
	char		*map;
	extern int	g_size;
	int			local_size;
	int			row;

	map = map_data + 5;
	local_size = g_size - 5;
	row = 0;
	while (local_size)
	{
		if (*map == '\n')
			row++;
		local_size--;
		map++;
	}
	return (row);
}

int	get_col(char *map_data)
{
	int		col;
	char	*map;

	col = 0;
	map = map_data + 5;
	while (*map != '\n')
	{
		col++;
		map++;
	}
	return (col);
}
