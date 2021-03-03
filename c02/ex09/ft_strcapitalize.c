/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 21:13:19 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/03 08:56:02 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	ft_lowercase(str);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		else if (str[index] == 32 || str[index] == 43 || str[index] == 45)
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
				str[index + 1] = str[index + 1] - 32;
		}
		index++;
	}
	return (str);
}
