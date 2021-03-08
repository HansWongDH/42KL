/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlim <jinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:38:45 by jinlim            #+#    #+#             */
/*   Updated: 2021/03/08 12:21:13 by jinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str, int range)
{
	int i;
	int num;
	int val;

	val = 1;
	num = 0;
	i = 0;

	while (i < range)
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				val *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
			i++;
		}
	}
	return (num * val);
}
