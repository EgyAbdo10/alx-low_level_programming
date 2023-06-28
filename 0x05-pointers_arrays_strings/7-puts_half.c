#include "main.h"
/**
 * puts_half - reverse string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int length = 0;
int j = 0;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
i = length / 2;
}
else if (length % 2 == 1)
{
i = (length + 1) / 2;
}
for (j = 0; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
