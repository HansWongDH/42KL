/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:19:45 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/02 11:58:28 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = 0;
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	srclen = 0;
	while (src[srclen] != '\0' && nb > 0)
	{
		dest[destlen] = src[srclen];
		destlen++;
		srclen++;
		nb--;
	}
	dest[destlen] = '\0';
	return (dest);
}
