/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:56:55 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/03 23:10:40 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	char *base1;
	char *base2;
	char *base3;
	char *script;

	base1 = "0123456789abcdef";
	base2 = "0123456789";
	base3 = "poneyvif";
	script = "14";

//	printf("%d \n",	ft_atoi_base(script, base1));
	printf("%d \n", ft_atoi_base(script, base2));
//	printf("%d \n", ft_atoi_base(script, base3));
}
