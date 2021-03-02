/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:19:08 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 21:19:08 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *joint;

	joint = dest;
	while (*joint != '\0')
	{
		joint++;
	}
	while (*src != '\0')
	{
		*joint = *(unsigned char*)src;
		joint++;
		src++;
	}
	*joint = '\0';
	return (dest);
}
