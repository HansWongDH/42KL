#include <stdio.h>
#include <stdlib.h>

/*try to create a sudoku bot that solve 4x4 sudoku*/

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
	while (y <=3)
	{
		if (grid[y][col] == num)
			return (0);
		y++;
	}
	return (1);
}

int	solvesudoku(int grid[4][4], int row, int col)
{
	int N;
	if(row == 3 && col == 4)
		return (1);
	if (col == 4)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] > 0)
		return solvesudoku(grid, row, col + 1);
	int num = 1;
	while (num <= 4)
	{
		if (issafe(grid, row, col, num)==1)
		{
			grid[row][col] = num;
			if (solvesudoku(grid, row, col + 1)==1)
				return (1);
		}
		num++;
		grid[row][col] = 0;
	}
	return (0);
}


void	print(int arr[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", arr[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}

int	main(void)
{
	int grid[4][4] = {	{1, 0 ,0, 4},
						{0, 0, 0, 0},
						{0, 0, 0, 0},
						{4, 0, 0, 0}	};

	if(solvesudoku(grid, 0, 0) == 1)
	print(grid);
	else
		printf("No solution");
	return (0);
}

