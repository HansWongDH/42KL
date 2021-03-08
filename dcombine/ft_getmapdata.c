/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmapdata.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 00:02:28 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/08 17:59:47 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GETMAPDATA_C
# define FT_GETMAPDATA_C

#include "ft.h"

#endif

int		ft_getmapdata(char *buff, t_vars *vars)
{
	int i;	
	int col_check;
	int flag;

	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
		{
			vars->full = buff[i - 1];
			vars->obsticle = buff[i - 2];
			vars->empty = buff[i - 3];
			vars->row = ft_atoi(buff, i - 3);
			break ;
		}
		i++;
	}
	i++;
   	vars->map_start = i;//for 2D array in malloc
	col_check = 1; //buff[i-1] = '\n'
	flag = 1;
	while (buff[i] != '\0') //can shorten
	{
		if (buff[i] == '\n' && flag == 1)
		{
			vars->col = col_check - 1;
			col_check = 0; //buff[i] == '\n'
			flag = 0;
		}
		else if (buff[i] == '\n' && flag == 0)
		{
			if (col_check - 1 != vars->col)
				return (-1); //invalid map
			else
				col_check = 0; //buff[i] = '\n'
		}
		i++;
		col_check++;
	}
	printf("%c \n", vars->full);
	printf("%c \n", vars->obsticle);
	printf("%c \n", vars->empty);
//	printf("%d \n", row);
//	printf("%d \n", col);
	return (0);
}

char		**ft_2d_array(char *buff, t_vars *vars)
{
	char **map;
	int i;
	int j;
	int k;
	char *str;

	map = (char **)malloc(vars->row * sizeof(int *));
	
	i = 0;
	while (i < vars->row)
	{
		map[i] = (char *)malloc(vars->col * sizeof(char));
		i++;
	}
	str = buff + vars->map_start;
	i = 0;
	k = 0;
	while (i < vars->row)
	{
		j = 0;
		while (i < vars->col)
		{
			if(str[i + j + k] == '\n')
				k++;
			map[i][j] = str[i + j + k];
			j++;
		}
		i++;
	}
	vars->map = map;
	return (vars->map);
}

