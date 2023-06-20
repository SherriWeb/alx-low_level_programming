#include "main.h"
/**
 *  _islower - checks for lowercase characters.
 *  c :characters to be checked.
 *  Return: 1 for lowercase.
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
