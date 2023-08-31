#include "main.h"

/**
 * get_exp - get the result of an exp operation
 * @num: the base number
 * @exp: the exponent
 * Return: the result
 */
int get_exp(int num, int exp)
{
int i = 0;
int res = 1;
if (exp == 0)
{
return (1);
}
else
{
for (; i < exp; i++)
{
res *= num;
}
}
return (res);
}
/**
 * set_bit - set a bit to 1 at a given index
 * @n: a pointer to the number
 * @inedx: the index of the bit
 * Return: 1 on success or 0 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int temp_num;
if (index > 63)
return (-1);
temp_num = *n >> index;
if ((temp_num & 1) == 0)
*n += get_exp(2, index);
return (1);
}
