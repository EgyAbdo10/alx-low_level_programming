#include <stdio.h>
/**
 * print_to_98 - print the sign of the passed number
 * Return: - void
 * @n: the number passed
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d", i);
putchar(44);
putchar(32);
}
}
else if (n > 98)
{
for (i = n; i > 98; i--)
{
printf("%d", i);
putchar(44);
putchar(32);
}
}
printf("%d", 98);
putchar('\n');
}
