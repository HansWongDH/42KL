/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:34:46 by wding-ha          #+#    #+#             */
/*   Updated: 2021/02/28 22:36:34 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print(int arr[4][4]);
int		ft_fill_grid(int *tab, int grid[4][4]);
int		ft_fill_row(int *tab, int grid[4][4]);
int		solvesudoku(int grid[4][4], int row, int col);
void	ft_putstr(char *str);
int		errorhandling(int argc, int tab[16]);
void	emptyarray(int grid[4][4]);

int		main(int argc, char **argv)
{
	int tab[16];
	int grid[4][4];
	int i;

	emptyarray(grid);
	i = 0;
	while (i < 16)
	{
		tab[i] = argv[i + 1][0] - '0';
		i++;
	}
	if (errorhandling(argc, tab) != 1)
	{
		ft_fill_row(tab, grid);
		ft_fill_grid(tab, grid);
		if (solvesudoku(grid, 0, 0) == 1)
		{
			print(grid);
		}
	}
}
