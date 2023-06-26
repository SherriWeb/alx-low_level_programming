#include "main.h"
#include "stdio.h"
/**
 *  char *_strcpy - copy a string.
 *  @dest: destination value.
 *  @src: source value.
 *  return_value : the pointer to dest.
 *  Description : a function that copies the string pointed to by src.
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
