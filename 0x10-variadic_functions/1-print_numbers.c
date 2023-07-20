#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sum all give args
 * @separator: the separator
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int x;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
printf("%d", x);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
}
