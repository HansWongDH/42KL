/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:33:50 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 15:00:05 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src;
	char dest[13] = "";
	
	src = "HELLO WORLD";

	ft_strcpy(dest, src);
	printf("%s, ", dest);
	return (0);
}
