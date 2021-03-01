/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:33:50 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 16:18:50 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned n);

int		main(void)
{
	char *src;
	char dest[12];

	src = "HELLO WORLD";

	printf("base   : %s\n", src);
	strncpy(dest, src, 11);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 11);
	printf("ft_cpy : %s\n", dest);
}
