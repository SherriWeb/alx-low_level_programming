#include "main.h"
#include "stdio.h"
/**
 *  print_array - Prints elements of an array.
 *  @n: elements parameter input.
 *  @a:string parameter input.
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != (n - i))
printf("%d,", a[i]);
else
printf("%d,", a[i]);
}
printf("\n");
}
