#include "main.h"
/**
 * _puts - retest the number to 98
 * @str: the first number you want to swap
 * Return: void
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
