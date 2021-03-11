/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhoumane <hhoumane@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:02:51 by hhoumane          #+#    #+#             */
/*   Updated: 2021/02/21 20:03:31 by hhoumane         ###   ########.fr       */
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
			if ((a == 1 || a == x) && (b == 1 || b == y))
				ft_putchar('o');
			else if (a > 1 && a < x && b > 1 && b < y)
				ft_putchar(' ');
			else if (b == 1 || b == y)
				ft_putchar('-');
			else
				ft_putchar('|');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
