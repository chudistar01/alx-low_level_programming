#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 *
 * @height: rows of the grid
 * @width: columns of the grid
 *
 * Return: pointer to the new grid or Null
 */
int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	
	return(grid);
}
