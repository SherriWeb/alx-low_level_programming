#include "main.h"
/**
 *  print_numbers - print numbers from 0 to 9..
 *  Return: the result the numbers from 0 to 9.
*/
void print_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar(x + '0');
}
putchar('\n');
}
