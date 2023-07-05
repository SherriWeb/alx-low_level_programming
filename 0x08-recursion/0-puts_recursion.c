#include "main.h"
#include <string.h>
/**
 *  _puts_recursion - Entry point.
 *  Description:Writing a function that prints a string, followed by a line.
 *  @s: the string to print.
 *  Return: nothing.
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
