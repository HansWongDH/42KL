/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:45:00 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/23 22:21:58 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		count;
	char	text;

	count = 0;
	while (true)
	{
		text = *str;
		if (text == '\0')
		{
			false;
			break ;
		}
		str++;
		count++;
	}
	return (count);
}
