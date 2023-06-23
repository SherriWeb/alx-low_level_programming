#include "main.h"
/**
 *  print_most_numbers - print numbers from 0 to 9..
 *  Description: print numbers excluding 2 and 4.
 *  Return: all numbers except 2 and 4.
*/
void print_most_numbers(void)
{
int num;
for (num = 0; num <= 9; x++)
{
if (num == 2 || num == 4)
continue;
_putchar(num + 48);
}
_putchar('\n');
}
