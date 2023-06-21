#include "main.h"
/**
 * times_table - print the sign of the passed number
 * Return: - void
 * @void: the number passed
 */
void times_table(void)
{
int i;
int b;
int res;
for (i = 0; i <= 9; i++)
{
for (b = 0; b <= 9; b++)
{
res = i * b;
_putchar(res);
if (b != 9)
_putchar(44);
}
_putchar('\n');
}
}
