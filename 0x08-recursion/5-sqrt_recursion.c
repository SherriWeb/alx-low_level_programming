#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  sqrt_recursion - Entry point.
 *  Description:Writing a function that returns the natural square root of a number.
 *  @n: number to calculate the square root.
 *  @i: iterate number.
 *  Return: the natural square root.
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}
