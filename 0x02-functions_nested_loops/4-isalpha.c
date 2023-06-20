#include "main.h"
/**
 *  main - Entry point.
 *  Description : prints alphabet.
 *  Return: Always 0 (Success).
*/
int _isalpha(int c)
if ((c >= 97 && c <= 222) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n')
}
