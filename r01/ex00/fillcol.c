/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillcol2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:07:26 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/28 22:21:52 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tab_is_4(int i, int grid[4][4])
{
	grid[0][i] = 1;
	grid[1][i] = 2;
	grid[2][i] = 3;
	grid[3][i] = 4;
}

void	ft_tab_is_1_4(int i, int grid[4][4])
{
	grid[1][i] = 3;
	grid[2][i] = 2;
	grid[3][i] = 1;
}

void	ft_check_32(int i, int *tab, int grid[4][4])
{
	if (tab[i] == 3 && tab[i + 4] == 2)
		grid[2][i] = 4;
	else if (tab[i] == 2 && tab[i + 4] == 3)
		grid[3][i] = 4;
}

int		ft_fill_grid(int *tab, int grid[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (tab[i] == 4 && tab[i + 4] == 1)
			ft_tab_is_4(i, grid);
		else if (tab[i] == 1)
		{
			grid[0][i] = 4;
			if (tab[i + 4] == 4)
				ft_tab_is_1_4(i, grid);
			else if (tab[i + 4] == 2)
				grid[3][i] = 3;
		}
		else
			ft_check_32(i, tab, grid);
		i++;
	}
	return (0);
}
