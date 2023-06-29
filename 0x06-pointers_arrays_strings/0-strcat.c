#include "main.h"
#include "stdio.h"
/**
 *  _strcat - function that concatenates two strings..
 *  @src : pointer to source input.
 *  @dest : pointer to destination input.
 *  Return: pointer to result string.
*/
char *_strcat(char *dest, char *src)
{
int c;
int c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; src[c2] ; c2++)
dest[c++] = src[c2];
return (dest);
}
