/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:14:31 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/08 16:03:16 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_C
# define FT_PRINT_C

#include <unistd.h>
#include "ft.h"

#endif

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putarr(t_vars vars)
{
	int i;
	int j;

	i = 0;
	while (i < vars.row)
	{
		j = 0;
		while (j < vars.col)
		{
			ft_putchar(vars.map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
