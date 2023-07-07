#include "main.h"
/**
 * _memset - blabla
 * @s: first
 * @b: second
 * @n: third
 * Return: s after modification
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
