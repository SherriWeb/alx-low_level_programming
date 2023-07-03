#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
/**
 *  set_string - Entry point.
 *  Description:Writing a function that sets the value of a pointer to a char.
 *  @s: input.
 *  @to:input.
 *  Return: always 0.
*/
void set_string(char **s, char *to)
{
*s = to;
}
