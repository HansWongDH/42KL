/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_temp_putarrd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:02:58 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/08 16:20:56 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TEMP_PUTARRD_C
# define FT_TEMP_PUTARRD_C

#include <stdio.h>
#include "ft.h"

#endif

void	ft_temp_putarrd(t_vars vars)
{
	int i;
	int j;

	i = 0;
	while (i < vars.row)
	{
		j = 0;
		while (j < vars.col)
		{
			printf("%d", vars.num_map[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
