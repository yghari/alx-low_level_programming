#include "main.h"

int **alloc_grid(int width, int height)
{
  unsigned int i;
  unsigned int j;
  char **arr;

  i = 0;
  j = 0;
  while (i < height)
  {
    j = 0;
    while (j < height)
    {
      arr[i][j] = malloc(sizeof(char));
      j++;
    }
    i++;
  }
  return (arr);

}