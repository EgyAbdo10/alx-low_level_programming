#include "main.h"
/**
 * puts2 - reverse string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
int j = 0;
while (str[j] != '\0')
{
j++;
}
while (i < j)
{
if (str[i] != '\0' && (i == 0 || i % 2 == 0))
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
