/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:31:13 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 23:14:09 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	*haystack;
	char	*needle;
	char	*resultc;
	char	*resultft;
	
	haystack = "Hello There General Kenobi";
	needle = " ";

	resultc = strstr(haystack, needle);
	resultft = ft_strstr(haystack, needle);
	printf("c %p / ft %p ", resultc, resultft);
	printf("c %s , ", resultc);
	printf("ft %s, ", resultft);
}
