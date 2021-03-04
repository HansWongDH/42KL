/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:22:51 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 12:39:09 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	move_up(int *num, int pos, int size)
{
	int holder;

	holder = num[pos - 1] + 1;
	if (holder > 9 - size + pos && pos != 1)
	{
		move_up(num, pos - 1, size);
		holder = num[pos - 2] + 1;
	}
	num[pos - 1] = holder;
}

void	print_combo(int *num, int i)
{
	int count;

	count = 0;
	while (count < i)
	{
		ft_putchar(num[count] + '0');
		count++;
	}
}

void	ft_print_combn(int n)
{
	int index;
	int tab[n];

	index = 0;
	while (index < n)
	{
		tab[index] = index;
		index++;
	}
	while (tab[0] < 9 - n + 1)
	{
		print_combo(tab, n);
		ft_putchar(',');
		ft_putchar(' ');
		move_up(tab, n, n);
	}
	print_combo(tab, n);
}
