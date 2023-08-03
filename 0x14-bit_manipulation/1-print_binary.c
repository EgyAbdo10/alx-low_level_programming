#include "main.h"
/**
 * power - raise a number to a specific power
 * @num: the number
 * @exp: the exponent
 * Return: the number raised to a specific power
 */
int power(int num, int exp)
{
if (exp == 0)
return (1);
return (power(num, exp - 1) * num);
}
/**
 * _log - raise a number to a specific power
 * @base: the base
 * @num: the number under the log
 * Return: the log for a number if found or -1 if not
 */
int _log(int base, int num)
{
int i = 0;
for (; power(base, i) != num && i <= num; i++)
continue;
if (i > num)
return (-1);
else
return (i);
}
/**
 * print_binary - print a number in binary format
 * @n: the number in the normal format
 */
void print_binary(unsigned long int n)
{
unsigned long int i = n;
unsigned long int iter, residual = n;
if (n == 0)
_putchar('0' + 0);
while (residual != 0)
{
for (; _log(2, i) == -1; i--)
continue;
_putchar('0' + 1);
residual -= i;

for (iter = i - 1; iter > residual; iter--)
{
if (_log(2, iter) != -1)
_putchar('0' + 0);
}
i = residual;
}
}
