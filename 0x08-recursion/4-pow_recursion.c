#include "main.h"
/**
 * _pow_recursion - writes the character c to stdout
 * @x: The number raised to the power of y
 * @y: the power of x
 * Return: factorial
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
