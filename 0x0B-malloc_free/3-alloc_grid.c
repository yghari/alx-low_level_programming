#include "main.h"

/**
* alloc_grid - Allocates a 2D array of characters
* @width: The width of the 2D array
* @height: The height of the 2D array
*
* Return: A pointer to the 2D array, or NULL if allocation fails
*/

char **alloc_grid(int width, int height)
{
	unsigned int i, j;
	char **arr = malloc(sizeof(char *) * height);

	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(char) * width);
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
			arr[i][j] = '\0';
		}
	}
	return (arr);
}
