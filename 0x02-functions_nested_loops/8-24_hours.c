#include "main.h"
/**
 * jack_bauer - print the sign of the passed number
 * Return: - void
 * @void: the number passed
 */
void jack_bauer(void)
{
int h2;
int h1;
int m;
int s;
for (h2 = 0; h2 <= 2; h2++)
{
for (h1 = 0; h1 <= 9; h1++)
{
if ((h2 <= 1 && h1 <= 9) || (h2 <= 2 && h1 <= 3))
{
for (m = 0; m <= 5; m++)
{
for (s = 0; s <= 9; s++)
{
_putchar(h2 + '0');
_putchar(h1 + '0');
_putchar(58);
_putchar(m + '0');
_putchar(s + '0');
_putchar('\n');
}
}
}
}
}
}
