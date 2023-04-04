#include "main.h"

/**
 * _print_chessboard - chess board.
 * @a: String that contains the board
 */

void print_chessboard(char (*a)[8])
{
     int i;
     int j;

     i = 0;
     j = 0;
     while (i < 8)
     {
          j = 0;
          while (j < 8)
          {
               _putchar(a[i][j]);
               j++;
          }
          _putchar('\n');
          i++;
     }
}
