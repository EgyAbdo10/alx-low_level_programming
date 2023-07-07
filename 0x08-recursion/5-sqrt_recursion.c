#include "main.h"
/**
 * find_sqrt - writes the character c to stdout
 * @n: The number raised to the power of y
 * @x: the sqrt
 * Return: factorial
 */
int find_sqrt(int n, int x)
{
if (n < 0)
{
return (-1);
}
int res = x * x;
if (n == res)
{
return (x);
}
if (x >= n)
{
return (-1);
}
x++;
return (find_sqrt(n, x));
}
/**
 * _sqrt_recursion - writes the character c to stdout
 * @n: The number raised to the power of y
 * Return: factorial
 */
int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1));
}
