/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:26:19 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/04 22:36:41 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		write(1, "\n", 1);
		index++;
	}
}
