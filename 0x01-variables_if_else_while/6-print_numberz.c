#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - A program that print numbers.
 *  Return: Always 0 (Success)
*/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
