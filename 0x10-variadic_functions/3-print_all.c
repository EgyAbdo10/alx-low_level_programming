#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - sum all give args
 * @format: the separator
 */
void print_all(const char * const format, ...)
{
int di, i = 0;
double f;
char *str, c, *sep = "", arr_ch[] = {'c', 'i', 's', 'f'};
va_list args;
va_start(args, format);
while (format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%s%c", sep, c);
break;
case 's':
str = va_arg(args, char*);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
break;
case 'i':
di = va_arg(args, int);
printf("%s%d", sep, di);
break;
case 'f':
f = va_arg(args, double);
printf("%s%f", sep, f);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
va_end(args);
printf("\n");
}
