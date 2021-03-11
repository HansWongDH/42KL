/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhoumane <hhoumane@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:05:26 by hhoumane          #+#    #+#             */
/*   Updated: 2021/02/21 20:05:58 by hhoumane         ###   ########.fr       */
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
			if ((a == 1 && b == 1) || (a == 1 && b == y))
				ft_putchar('A');
			else if (a > 1 && a < x && b > 1 && b < y)
				ft_putchar(' ');
			else if ((a == x && b == 1) || (a == x && b == y))
				ft_putchar('C');
			else
				ft_putchar('B');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
