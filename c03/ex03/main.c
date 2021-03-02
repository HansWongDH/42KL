/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:31:13 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 21:43:23 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char	*base;
	char	*src;
	char	destc[100];
	char	destft[100];
	int		index;

	base = "Oh, you are approaching me?";
	src = "I can't beat the shit out without getting closer";
	index = 0;
	while (index < 50)
	{
		destc[index] = base[index];
		destft[index] = base[index];
		index++;
	}
	printf("c, %s, ", strncat(destc, src, 30));
	printf("ft, %s, ", ft_strncat(destft, src, 30));
}
