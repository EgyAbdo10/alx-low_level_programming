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
 * get_log - get the log of a number with a given base
 * @number: the number under the log
 * @base: the base of the log
 * Return: log if it is a whole number or -1 if not
 */
int get_log(int number, int base)
{
int i = 0;
for (; i <= number; i++)
{
if (get_exp(base, i) == number)
{
return (i);
}
}
return (-1);
}
/**
 * print_binary - print a number in a binary format
 * @n: the number
 */
void print_binary(unsigned long int n)
{
int temp_num = 0;
int checker = 0;
int i = 31;
for (; i >= 0; i--)
{
temp_num = n >> i;
if (temp_num & 1)
{
checker = 1;
write(STDOUT_FILENO, "1", 1);
}
else
{
if (checker == 1)
write(STDOUT_FILENO, "0", 1);
}
}
if (checker == 0)
write(STDOUT_FILENO, "0", 1);
}
