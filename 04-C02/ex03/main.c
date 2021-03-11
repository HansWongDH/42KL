/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:51:10 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 18:20:08 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char *strok;
	char *strnotok;

	strok = "HELLO0";
	strnotok = "01234";
	printf("0 is not %d, ", ft_str_is_numeric(strok));
	printf("1 is ok %d, ", ft_str_is_numeric(strnotok));
}
