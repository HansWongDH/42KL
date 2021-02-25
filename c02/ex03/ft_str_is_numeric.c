/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:05:55 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 19:08:19 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int index;
	int valid;

	valid = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
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
