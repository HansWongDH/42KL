/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:31:13 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/02 11:23:04 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
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
	printf("c test %lu :%s\n", strlcat(destc, src, 90), destc);
	printf("ft test %d :%s\n", ft_strlcat(destft, src, 90), destft);
}
