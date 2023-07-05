#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  puts_recursion - Entry point.
 *  Description:Writing a function that prints a string in reverse.
 *  @s: a string to reverse.
 *  Return: nothing.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
putchar(*s);
}
