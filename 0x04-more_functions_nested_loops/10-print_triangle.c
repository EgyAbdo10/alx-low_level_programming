#include "main.h"
/**
 * print_triangle - check the letter case
 * @void: second number
 * Return: 1 if upeer and 0 if lower
 */

void print_triangle(int size)
{
int i, j, c;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = (size - i); j > 0; j--)
{
_putchar(32);
}
for (c = 0; c < i; c++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
