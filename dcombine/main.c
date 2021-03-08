/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:09:37 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/08 18:00:07 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_C
# define MAIN_C

#include "ft.h"

#endif

int		main(int argc, char **argv)
{
	int		fd;
	char	buff[500];
	t_vars vars;
	
	if (argc > 5)
		return (0);
	 
	if (argc == 2) //improve for error handling
	{
		fd = open(argv[1], O_RDONLY);
		if(fd == -1)
		{
			printf("failed");
			exit(1);
		}
		read(fd, buff, 500);
		printf("%s \n", buff); //temp
	}
	

	//zach modification 
	//char *map_data;
	//char **map_array;
	// map_data is onl needed for allocate_map_arr() and write_map_arr()
	// map_array is the 2d array, exactly same as map[9][27]
	//read_map(open_map(argv[1]), &map_data);
	//allocate_map_arr(&map_array, map_data);
	//write_map_arr(map_array, map_data);

	//vars.row = g_row;
	//vars.col = g_col;
	//vars.map = map_array;

	ft_getmapdata(buff, &vars);
	ft_2d_array(buff, &vars);
//	ft_putchar('\n'); //temp
//	ft_convert_map(vars);
//	vars.max = ft_find_square(vars);
//	ft_fill_square(vars);
	ft_putarr(vars);
//	ft_putchar('\n'); //temp

	free(vars.map);
}
//	ft_temp_putarrd(vars);// Display num_map
