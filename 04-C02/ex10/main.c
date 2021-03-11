/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:33:50 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 16:35:32 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlcpy(char *dest, char *src, unsigned size);

int		main(void)
{
	char *src;
	char dest[12];

	src = "0";

	printf("base   : %s\n", src);
	strlcpy(dest, src, 2);
	printf("cpy    : %s\n", dest);
	ft_strlcpy(dest, src, 2);
	printf("ft_cpy : %s\n", dest);
}
