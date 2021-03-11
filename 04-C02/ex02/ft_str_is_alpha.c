/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:17:16 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 19:08:02 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int index;
	int valid;

	valid = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (((str[index] >= 'A' && str[index] <= 'Z'))
		|| ((str[index] >= 'a' && str[index] <= 'z')))
		{
			valid = 1;
			index++;
		}
		else
		{
			valid = 0;
			break ;
		}
	}
	return (valid);
}
