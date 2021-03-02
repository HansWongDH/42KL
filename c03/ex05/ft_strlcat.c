/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 10:59:18 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/02 11:24:20 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int 	ft_strlen(char *str)
{
	unsigned int index;
	
	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destlen;
	unsigned int srclen;
	unsigned int result;
	unsigned int index;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	result = srclen;
	if (size <= destlen)
		result += size;
	else
		result += destlen;

	index = 0;
	while (src[index] != '\0' && destlen + 1 < size)
	{
		dest[destlen] = src[index];
		index++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (result);
}
