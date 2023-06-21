#include "main.h"
/**
 * print_last_digit - print the sign of the passed number
 * Return: - 1 or 0 or -1
 * @n: the number passed
 */
int print_last_digit(int n)
{
int res;
res = n % 10;
if (res < 0)
{
res = res * -1;
}
_putchar(res + '0');
return (res);
}
