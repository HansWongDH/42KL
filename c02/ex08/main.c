/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:51:10 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 20:47:53 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

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
	ft_strlowcase(&test[0]);
	printf("%s \n", strok);
	printf("%s \n", test);
}
