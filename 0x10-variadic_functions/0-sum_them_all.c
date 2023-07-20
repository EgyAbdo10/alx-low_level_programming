#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all give args
 * @n: number of arguments
 * Return: the result of the sum operation
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int f_res = 0;
va_list args;
va_start(args, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
f_res += va_arg(args, int);
}
va_end(args);
return (f_res);
}
