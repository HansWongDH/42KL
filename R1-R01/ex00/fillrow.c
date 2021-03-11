/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillrow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:07:26 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/28 22:33:49 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tab_is_4_row(int i, int grid[4][4])
{
	grid[i][0] = 1;
	grid[i][1] = 2;
	grid[i][2] = 3;
	grid[i][3] = 4;
}

void	ft_tab_is_1_4_row(int i, int grid[4][4])
{
	grid[i][1] = 3;
	grid[i][2] = 2;
	grid[i][3] = 1;
}

void	ft_check_32_row(int i, int *tab, int grid[4][4])
{
	if (tab[i + 8] == 3 && tab[i + 12] == 2)
		grid[i][2] = 4;
	else if (tab[i + 8] == 2 && tab[i + 12] == 3)
		grid[i][3] = 4;
}

int		ft_fill_row(int *tab, int grid[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (tab[i + 8] == 4 && tab[i + 12] == 1)
			ft_tab_is_4_row(i, grid);
		else if (tab[i + 8] == 1)
		{
			grid[i][0] = 4;
			if (tab[i + 12] == 4)
				ft_tab_is_1_4_row(i, grid);
			else if (tab[i + 12] == 2)
				grid[i][3] = 3;
		}
		else
			ft_check_32_row(i, tab, grid);
		i++;
	}
	return (0);
}
