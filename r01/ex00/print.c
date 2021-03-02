/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:37:22 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/28 16:06:57 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int arr[4][4])
{
	int n;
	int i;
	int j;

	n = 4;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar('0' + arr[i][j]);
			ft_putchar(32);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_putstr(char *str)
{
	char text;

	while (true)
	{
		text = *str;
		if (text == '\0')
		{
			false;
			break ;
		}
		else
		{
			ft_putchar(*str);
			str++;
		}
	}
}
