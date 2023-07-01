#include <stdio.h>
#include "main.h"
/**
 * print_array - reverse string
 * @a: the integer array
 * @n: the number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%d", a[i]);
}
else if (i != (n - 1))
{
printf("%d, ", a[i]);
}
}
printf("\n");
}
