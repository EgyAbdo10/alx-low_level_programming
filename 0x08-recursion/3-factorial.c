#include "main.h"
/**
 * factorial - writes the character c to stdout
 * @n: The character to print
 * Return: factorial
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
