#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - A program that prints alphabets.
 *  Return: Always 0 (Success)
*/
int main(void)
{
int n = 97;
int m = 65;

while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
