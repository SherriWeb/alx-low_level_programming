#include "main.h"
#include "stdio.h"
/**
 *  rot13 - encodes a string using rot13.
 *  @s : input string.
 *  return : encoded string.
*/
char *rot13(char *s)
{
int i;
char rot13[] = "abcdefghijklmnopqrstyvwzyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstyvwzyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = s;
while (*s)
{
for (i = 0; i <= 52; i++)
{
if (*s == rot13[i])
{
*s = ROT13[i];
break;
}
}
s++;
}
return (ptr);
}
