#include "stdio.h"
/**
 * print_alphabet_x10 - alpha
 * Return - void
 */
void print_alphabet_x10(void)
{
int i;
int b;
for (i = 0; i < 10; i++)
{
for (b = 97; b < 123; b++)
{
printf(b);
}
printf('\n');
}
}
