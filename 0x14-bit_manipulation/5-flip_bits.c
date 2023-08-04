#include "main.h"
/**
 * flip_bits - count how many bits we need to change to make 2 numbers similar
 * @n: the first number
 * @m: the second number
 * Return: how many bits we need to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int n1 = n, m1 = m;
int count = 0;
int i;

for (i = 63; i >= 0; i--)
{
int n_bit = (n1 >> i) & 1;
int m_bit = (m1 >> i) & 1;

if (n_bit != m_bit)
{
count++;
}
}

return (count);
}
