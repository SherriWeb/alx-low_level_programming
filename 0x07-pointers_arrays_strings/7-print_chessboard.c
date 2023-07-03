#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 *  _chessboard - Entry point.
 *  Description:Writing a function that prints the chessboard.
 *  @a: array.
 *  Return: always 0.
*/
void print_chessboard(char (*a)[8])
{
int i, n;
for (i = 0; i < 8; i++)
{
for (n = 0; n < 8; n++)
{
_putchar(a[i][n]);
}
_putchar('\n');
}
}
