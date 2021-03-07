/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxue-qia <cxue-qia@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:24:19 by cxue-qia          #+#    #+#             */
/*   Updated: 2021/03/07 18:29:14 by cxue-qia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "zach.h"

static int		open_map(const char *map_filename)
{
	int map_filedes;

	if ((map_filedes = open(map_filename, O_RDONLY)) < 0)
	{
		ft_putstr("Failed to open map file.\n");
		return (-1);
	}
	return (map_filedes);
}

char		*read_map(int map_filedes)
{
	char		buffer[1000];
	char		*data;
	extern int	g_size;

	if ((g_size = (read(map_filedes, buffer, 1000))) < 0)
	{
		ft_putstr("Failed to read map file.\n");
		return (-1);
	}
	data = malloc(g_size * sizeof(char));
	ft_strncpy(data, buffer, g_size);
	return (data);
}
