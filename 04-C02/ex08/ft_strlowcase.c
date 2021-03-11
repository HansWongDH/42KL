/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 20:41:59 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 20:48:07 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		index;
	char	text;

	index = 0;
	while (str[index] != '\0')
	{
		text = str[index];
		if (str[index] >= 65 && str[index] <= 90)
		{
			str[index] = text + 32;
		}
		index++;
	}
	return (str);
}
