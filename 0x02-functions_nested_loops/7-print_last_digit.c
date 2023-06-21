#include "main.h"
/**
 * print_last_digit - print the sign of the passed number
 * Return: - 1 or 0 or -1
 * @n: the number passed
 */
int print_last_digit(int n)
{
if (n > 0)
{
n = n % 10;
return (n * 11);
}
else if (n < 0)
{
n *= -1
n = n % 10;
return (n * 11);
}
else
{
return (00);
}
}
