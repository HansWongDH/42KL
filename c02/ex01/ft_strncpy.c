/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:29:02 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 16:17:29 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{	
		if (src[index] != '\0')
			dest[index] = src[index];
		else
		{
			dest[index] = '\0';
			break ;
		}	
		index++;
	}
	return(dest);
}
