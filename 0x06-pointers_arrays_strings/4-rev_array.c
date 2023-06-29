#include "main.h"
#include "stdio.h"
/**
 *  reverse_array - reverse the content of an array.
 *  @a : an array of integers.
 *  @n : the number of elements to swap.
 *  return : nothing.
*/
void reverse_array(int *a, int n)
{
int i;
int j;
int t;
for (i = 0, j = (n - 1); i < j; i++, j--)
{
t = a[i];
a[i] = a[j];
a[j] = t;
}
}
