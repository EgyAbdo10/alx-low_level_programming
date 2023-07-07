#include "main.h"
/**
 * _puts_recursion - writes the character c to stdout
 * @s: The character to print
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
s++;
_puts_recursion(s);
}
else if (*s == '\0')
{
putchar('\n');
return;
}
}
