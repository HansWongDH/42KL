/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhoumane <hhoumane@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:03:52 by hhoumane          #+#    #+#             */
/*   Updated: 2021/02/21 20:32:09 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1)
				|| (a == x && b == y && b >= 2 && x != 1))
				ft_putchar('/');
			else if (a > 1 && a < x && b > 1 && b < y)
				ft_putchar(' ');
			else if ((a == 1 && b == y) || (a == x && b == 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
