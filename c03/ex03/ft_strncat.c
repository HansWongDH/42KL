/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:19:45 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 21:48:02 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *joint;

	joint = dest;
	while (*joint != '\0')
	{
		joint++;
	}
	while (*src != '\0' && nb > 0)
	{
		*joint = *(unsigned char*)src;
		joint++;
		src++;
		nb--;
	}
	*joint = '\0';
	return (dest);
}
