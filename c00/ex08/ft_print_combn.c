/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:05:37 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/23 11:57:07 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n, char a)
{
	int in;

	in = 0;
	if (n = in)
	{
		ft_putchar('0' + a);
	}
	else
	break;
	in++;	
}	 

void	ft_break_number()
{
		if (n < 1)
		{
		ft_break_number(a /10);
		}
		ft_putchar('0' + a%10);
}
