#include "main.h"
/**
 * print_most_numbers - check the letter case
 * @void: second number
 * Return: 1 if upeer and 0 if lower
 */

void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
{
_putchar(i);
}
}
_putchar('\n');
}
