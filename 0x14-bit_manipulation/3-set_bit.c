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
 * set_bit - set a the value of a bit at a certain index to 1
 * @n: a pointer to the number
 * @index: the index of the bit starting from zero
 * Return: 1(success) or (-1)faild
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i = *n;
if (index > 63)
return (-1);
if (((i >> index) & 1) == 1)
{
return (1);
}
else
{
*n += power(2, index);
}
return (1);
}
