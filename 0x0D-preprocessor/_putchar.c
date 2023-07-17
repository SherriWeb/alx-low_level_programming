#include "unistd.h"
/**
 *  main - Entry point.
 *putchar -writes the character c to stdout.
 * c : the character to print.
 *  Return: -1 is returned on error.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
