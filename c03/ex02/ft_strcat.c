/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:19:08 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/02 11:59:56 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		destlen;
	int		srclen;

	destlen = 0;
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	srclen = 0;
	while (src[srclen] != '\0')
	{
		dest[destlen] = src[srclen];
		destlen++;
		srclen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
