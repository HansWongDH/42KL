/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:07:36 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 21:16:30 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char *base;
	char *src;
	char destc[100];
	char destft[100];
	int index;

	base	= "Hello  ";
	src		= "World";

	index = 0;
	while (index < 6)
	{
		destc[index]	= base[index];
		destft[index]	= base[index];
		index++;
	}

	printf("c %s, ", strcat(destc, src));
	printf("ft %s, ", ft_strcat(destft, src));
}
