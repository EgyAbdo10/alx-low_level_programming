#include "main.h"
/**
 * print_sign - print the sign of the passed number
 * Return: - 1 or 0 or -1
 * @n: the number passed
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
