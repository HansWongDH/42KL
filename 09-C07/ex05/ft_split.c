/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:32:47 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/11 11:40:57 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int index;
	int size;

	size = ft_strlen(*str);
	index = 0;
	while (index < size)
	{
		str[index] = index + '0';
	}
	return (str);
}
