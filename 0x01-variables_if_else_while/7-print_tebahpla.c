#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - A program that print alphabets in reverse.
 *  Return: Always 0 (Success)
*/
int main(void)
{
int n = 122;

while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
