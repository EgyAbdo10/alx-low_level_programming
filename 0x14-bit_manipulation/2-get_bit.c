#include "main.h"
/**
 * get_bit - get the bit at a certain index
 * @n: the number
 * @index: the index of the bit
 * Return: the value of the bit or (-1) if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int temp_num;
if (index > 63)
return (-1);
temp_num = n >> index;
if (temp_num & 1)
return (1);
else
return (0);
}
