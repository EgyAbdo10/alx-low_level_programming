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
int fi;
int se;
for (i = 0; i <= 9; i++)
{
for (b = 0; b <= 9; b++)
{
res = i * b;
if (res > 9)
{
fi = res % 10;
se = (res - fi) / 10;
_putchar(44);
_putchar(32);
_putchar(se + '0');
_putchar(fi + '0');
}
else
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(res + '0');
}
}
_putchar('\n');
}
}
