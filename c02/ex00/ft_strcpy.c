/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:21:13 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 12:41:34 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

char	*ft_strcpy(char *dest, char *src)
{	int index;
	
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return(dest);
}
