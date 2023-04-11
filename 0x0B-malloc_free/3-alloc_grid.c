#include "main.h"

/**
* alloc_grid - Allocates a 2D array of characters
* @width: The width of the 2D array
* @height: The height of the 2D array
*
* Return: A pointer to the 2D array, or NULL if allocation fails
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = malloc(sizeof(int *) * height);

	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
