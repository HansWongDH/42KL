/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:30:56 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 19:57:45 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		index;
	char	text;

	index = 0;
	while (str[index] != '\0')
	{
		text = str[index];
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] = text - 32;
		}
		index++;
	}
	return (str);
}
