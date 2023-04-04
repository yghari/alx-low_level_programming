#include "main.h"
#include <string.h>

/**
 * print_diagsmus - diagram 
 * @a: String
 * Return: NULL
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int res1,res2;
	int option;
	
	i = 0;
	option = 0;
	res1 = 0;
	res2 = 0;
	j = size * size;
	res1 = a[0]; 
	while (i < j)
	{
		res1 = res1 + a[i];
		i  = ( size + i + 1);
	}
	i = 0;
	while (i < j - 1)
	{
		res2 = res2 + a[i];
		i = size + i - 1;
	}
  	printf("%d, %d\n",res1, res2);
}
int main(void)
{
    int c3[3][3] = {
	   {0, 1, 5},
	   {10, 11, 12},
	   {1000, 101, 102},
    };
    int c5[5][5] = {
	   {0, 1, 5, 12124, 1234},
	   {10, 11, 12, 123521, 12512},
	   {1000, 101, 102, 12545, 214543435},
	   {100, 1012451, 11102, 12545, 214543435},
	   {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}