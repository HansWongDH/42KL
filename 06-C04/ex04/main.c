/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:56:55 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/03 19:38:14 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	char *base1;
	char *base2;
	char *base3;
	char *base4;

	base1 = "0123456789aacdef";
	base2 = "012345";
	base3 = "poneyvif";
	base4 = "0123456789";

	ft_putnbr_base(20, base1);
	printf("\n");
	ft_putnbr_base(20, base2);
	printf("\n");
	ft_putnbr_base(20, base3);	
	printf("\n");
	ft_putnbr_base(20, base4);
		
}
