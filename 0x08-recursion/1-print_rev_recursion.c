#include "main.h"
/**
 * _print_rev_recursion - writes the character c to stdout
 * @s: The character to print
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
