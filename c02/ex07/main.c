/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:51:10 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 19:54:44 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char *strok;
	char test[6];

	int index;

	strok = "HioiE";
	index = 0;
	while (index < 6)
	{
		test[index] = strok[index] + 0;
		index++;
	}
	ft_strupcase(&test[0]);
	printf("%s \n", strok);
	printf("%s \n", test);
}
