#include "main.h"
/**
 * swap_int - retest the number to 98
 * @a: the first number you want to swap
 * @b: the second number you want to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
int hold;
hold = *a;
*a = *b;
*b = hold;
}
