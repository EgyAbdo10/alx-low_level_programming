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
 * my_strlen - get the length of a string
 * @str: the string
 * Return: the length of the string
 */
int my_strlen(const char *str)
{
int i = 0;
if (str == NULL)
return (0);
while (str[i] != '\0')
i++;
return (i);
}
/**
 * binary_to_uint - change binary to base 10
 * @b: the number string in the binary format
 * Return: the equivalint base 10 number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int res = 0;
if (b == NULL)
return (0);
int len = my_strlen(b);
for (; b[i] != '\0'; i++, len--)
{
if (b[i] != '1' && b[i] != '0')
return (0);
if (b[i] == '1')
{
res += get_exp(2, (len - 1));
}
}
return (res);
}
