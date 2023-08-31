#include "main.h"
/**
 * flip_bits - get how many bits need to be flipped to make to numbers similar
 * @n: first number
 * @m: second number
 * Return: number of bits need to be flipped to make to numbers similar
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0, iter;
for (iter = 63; iter >= 0; iter--)
{
if ((n >> iter & 1) != (m >> iter & 1))
i++;
}
return (i);
}
