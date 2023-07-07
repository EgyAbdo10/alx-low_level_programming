#include "main.h"
/**
 * check_if_prime - check if the number is prime or not
 * @n: The number raised to the power of y
 * @x: the number
 * Return: 1 on success and 0 on fail
 */
int check_if_prime(int n, int x)
{
int res = n / x;
if (x == n)
{
return (1);
}
if (res * x == n)
{
return (0);
}
if (n <= 1)
{
return (0);
}
x++;
return (check_if_prime(n, x));
}
/**
 * is_prime_number - writes the character c to stdout
 * @n: The number raised to the power of y
 * Return: 1 on success and 0 on fail
 */
int is_prime_number(int n)
{
return (check_if_prime(n, 2));
}
