#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - sum all give args
 * @format: the separator
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";
va_list args;
va_start(args, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 's':
str = va_arg(args, char*);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
va_end(args);
printf("\n");
}
