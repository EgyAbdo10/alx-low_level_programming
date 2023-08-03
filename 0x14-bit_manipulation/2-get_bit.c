#include "main.h"
/**
 * get_bit - get a the value of a bit at a certain index
 * @n: the number
 * @index: the index of the bit starting from zero
 * Return: the value of the bit at the index givet
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int i = n;
if (index > 63)
return (-1);
i = n >> index;
if (i & 1)
return (1);
else
return (0);
}
