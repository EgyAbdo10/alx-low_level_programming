#include "main.h"
/**
 * print_rev - retest the number to 98
 * @s: the first number you want to swap
 * Return: void
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
while (length >= 0)
{
_putchar(s[length]);
length--;
}
_putchar(s[0]);
_putchar('\n');
}
