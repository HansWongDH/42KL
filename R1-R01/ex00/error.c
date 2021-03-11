/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 18:53:45 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/28 21:22:36 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		*invalidinput(int *error, int tab[16])
{
	int i;
	int sumcol;
	int sumrow;

	i = 0;
	while (i < 4)
	{
		sumcol = tab[i] + tab[i + 4];
		sumrow = tab[i + 8] + tab[i + 12];
		if (sumcol < 3 || sumcol > 5 || sumrow < 3 || sumrow > 5)
		{
			*error = 1;
			ft_putstr("Invalid input.\n");
			break ;
		}
		i++;
	}
	return (error);
}

int		errorhandling(int argc, int tab[16])
{
	int i;
	int error;
	int *point;

	point = &error;
	error = 0;
	invalidinput(point, tab);
	if (argc != 17)
	{
		ft_putstr("Error! Must have 16 input numbers.\n");
		error = 1;
	}
	i = 0;
	while (i < 16)
	{
		if ((tab[i] < 1) || (tab[i] > 4))
		{
			ft_putstr("Error! Input must be between 1 and 4.\n");
			error = 1;
		}
		i++;
	}
	return (error);
}

void	emptyarray(int arr[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
}
