#include "main.h"
#include <string.h>
/**
 *  _strpbrk - Entry point.
 *  Description:Writing a function that searches a string of a set of bytes.
 *  @s: input.
 *  @accept : input.
 *  Return: always 0.
*/
char *_strpbrk(char *s, char *accept)
{
int i, n;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
return (s + i);
}
}
return (NULL);
}
