#include "main.h"
/**
 * _print_rev_recursion - writes the character c to stdout
 * @s: The character to print
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
}
_putchar(*s);
}
