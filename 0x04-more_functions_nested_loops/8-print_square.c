#include "main.h"
/**
 * print_square - check the letter case
 * @size: second number
 * Return: 1 if upeer and 0 if lower
 */

void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
