#include "main.h"
#include "stdio.h"
/**
 *  rev_string - Prints reversed string.
 *  @s: pointer to the string to print.
 *  Return: void.
*/
void rev_string(char *s)
{
int l;
int i;
char temp;
for (l = 0; s[l] != '\0'; ++l)
for (i = 0; i < 1 / 2; i++)
{
temp = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = temp;
}
}
