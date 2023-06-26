#include "main.h"
#include "stdio.h"
/**
 *  _strlen - Returns the length of a string.
 *  @s: the string to get the length of.
 *  Return: the length of @str.
*/
int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
++counter;
return (counter);
}
