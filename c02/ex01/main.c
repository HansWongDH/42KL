/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:33:50 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 17:15:40 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned n);

int		main(void)
{
	char src[6] = "HELLO";
	char dest[6] = "WORLD";
	char *firstsrc;
	char *firstdest;

	firstsrc = &src[0];
	firstdest = &dest[0];

	int index = 0;
	while (index <= 5)
	{
		printf("%c, ", dest[index]);
		index++;
	}
	ft_strncpy(firstdest, firstsrc, 4);
	int index2 = 0;
	while (index2 <= 5)
	{
		printf("%c, ", dest[index2]);
		index2++;
	}
	return (0);
}
