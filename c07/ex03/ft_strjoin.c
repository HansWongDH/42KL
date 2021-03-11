/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 19:17:52 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/11 16:58:55 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		ft_lenlen(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		seplen;

	seplen = ft_strlen(sep);
	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ((size - 1) * seplen);
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int		srclen;
	int		destlen;

	srclen = 0;
	destlen = 0;
	while (dest[destlen])
		destlen++;
	while (src[srclen])
	{
		dest[destlen + srclen] = src[srclen];
		srclen++;
	}
	dest[destlen + srclen] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*comb;

	if (size < 0)
		return (NULL);
	if (size == 0)
	{
		comb = malloc(sizeof(char));
		*comb = 0;
		return (comb);
	}
	if (!(comb = malloc(sizeof(char) * ft_lenlen(size, strs, sep) + 1)))
		return (NULL);
	*comb = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(comb, strs[i]);
		if (i < size - 1)
			ft_strcat(comb, sep);
		i++;
	}
	return (comb);
}
