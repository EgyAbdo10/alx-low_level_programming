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
 * binary_to_uint - change binary to a normal number
 * @b: the binary string
 * Return: the number in the normal format
 */
unsigned int binary_to_uint(const char *b)
{
int j, i = 0;
unsigned int res = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
i++;
i--;
for (j = 0; i >= 0; i--, j++)
{
if (b[i] == '1')
res += power(2, j);
else if (b[i] == '0')
continue;
else
return (0);
}
return (res);
}
