/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:51:10 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 18:47:40 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char *strok;
	char *strnotok;

	strok = "hello";
	strnotok = "heLlo";
	printf("1 is ok %d, ", ft_str_is_lowercase(strok));
	printf("0 is not %d, ", ft_str_is_lowercase(strnotok));
}
