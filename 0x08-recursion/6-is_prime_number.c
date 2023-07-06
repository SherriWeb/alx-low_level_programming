#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  is_prime_number - returns if a number is prime.
 *  @n: number to be checked.
 *  check_prime :a function that returns 1 if the input prime number.
 *  @i: the iteration times.
 *  Return: return 1 for prime or 0 composite.
*/
int check_prime(int n, int i);
int is_prime_number(int n)
{
return (check_prime(n, 1));
}
int check_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (check_prime(n, i + 1));
}
