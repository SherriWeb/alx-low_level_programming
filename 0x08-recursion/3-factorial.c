#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  factorial - Entry point.
 *  Description:Writing a function that returns the factorial of a number.
 *  @n: the number to calculate the factorial.
 *  Return: nothing.
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
