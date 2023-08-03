#include "main.h"

/**
 * print_binary - print a number in binary format
 * @n: the number in the normal format
 */
void print_binary(unsigned long int n)
{
int checker = 0;
unsigned long int temp;
int iter;
if (n == 0)
_putchar('0' + 0);
for (iter = 63; iter >= 0; iter--)
{
temp = n >> iter;
if ((temp & 1) == 1)
{
_putchar('0' + 1);
checker = 1;
}
else
{
if (checker == 1)
_putchar('0' + 0);
}
}
}
