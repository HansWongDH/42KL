/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:49:20 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 23:07:35 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*needle;
	int		i;
	int		j;

	needle = to_find;
	i = 0;
	if (needle[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
