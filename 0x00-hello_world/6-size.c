#include <stdio.h>
/**
 *  main - A program that prints the size of types.
 *  Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %u bytes(s)\n", sizeof(char));
printf("Size of a int: %u bytes(s)\n", sizeof(int));
printf("Size of a long int: %u bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %u bytes(s)\n", sizeof(long long int));
printf("Size of a long float: %u bytes(s)\n", sizeof(float));
return (0);
}
