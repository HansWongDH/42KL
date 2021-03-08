/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:22:37 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/08 17:58:31 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stdio.h>//TEMP - used in main.c & getmapdata
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "zach.h"

typedef struct
{
	int		row;
	int		col;
	int		size;//??
	int		max;
	int		map_start;
	char	empty;
	char	obsticle;
	char	full;
	char	**map;//how to use this?
	int		**num_map;//how to use this?


}	t_vars;


int		ft_atoi(char *str, int range);
int		ft_getmapdata(char *buff, t_vars *vars);
int		ft_convert_map(t_vars vars);
int		ft_find_square(t_vars vars);
void	ft_fill_square(t_vars vars);
void	ft_putarr(t_vars vars);
void	ft_temp_putarrd(t_vars vars); //TEMP
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	**ft_2d_array(char *buff, t_vars *vars);

#endif
