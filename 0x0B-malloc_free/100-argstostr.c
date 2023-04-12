#include "main.h"
/**
 * argstostr - concatenates all the arguments passed to the program
 * into a single string separated by a newline character
 * @ac: the number of arguments
 * @av: the array of arguments
 * Return: a pointer to the concatenated string
 * or NULL if memory allocation fails or no arguments are passed
*/
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *arr;

	i = 0;
	j = 0;
	k = 0;
	if (ac <= 0 || av == NULL)
		return (NULL);
	arr = malloc((ac + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			arr[k] = av[i][j];
			j++;
			k++;
		}
		arr[k] = '\n';
		k++;
		i++;
		}
		return (arr);
}
