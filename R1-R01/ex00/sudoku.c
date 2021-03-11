/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:00:14 by hloke             #+#    #+#             */
/*   Updated: 2021/02/28 20:19:31 by hloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	issafe(int grid[4][4], int row, int col, int num)
{
	int x;
	int y;

	x = 0;
	while (x <= 3)
	{
		if (grid[row][x] == num)
			return (0);
		x++;
	}
	y = 0;
	while (y <= 3)
	{
		if (grid[y][col] == num)
			return (0);
		y++;
	}
	return (1);
}

int	solvesudoku(int grid[4][4], int row, int col)
{
	int num;

	num = 1;
	if (row == 3 && col == 4)
		return (1);
	if (col == 4)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] > 0)
		return (solvesudoku(grid, row, col + 1));
	while (num <= 4)
	{
		if (issafe(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (solvesudoku(grid, row, col + 1) == 1)
				return (1);
		}
		num++;
		grid[row][col] = 0;
	}
	return (0);
}
