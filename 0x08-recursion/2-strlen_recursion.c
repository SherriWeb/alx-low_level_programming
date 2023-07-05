#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  puts_recursion - Entry point.
 *  Description:Writing a function that prints a string in reverse.
 *  @s: a string to reverse.
 *  Return: nothing.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
