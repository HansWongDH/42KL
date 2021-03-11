/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:15:58 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/25 19:27:18 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int index;
	int valid;

	valid = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] <= 126)
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
