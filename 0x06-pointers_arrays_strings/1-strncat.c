#include "main.h"
#include "stdio.h"
/**
 *  _strncat - function that concatenates two strings..
 *  @src : pointer to source input.
 *  @dest : pointer to destination input.
 *   @n : the number of bytes from src to be appended to dest.
 *  Return: pointer to result string.
*/
char *_strncat(char *dest, char *src, int n)
{
int c;
int i;
c = 0;
while (dest[c])
c++;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + i] = src[i];
dest[c + i] = '\0';
return (dest);
}
