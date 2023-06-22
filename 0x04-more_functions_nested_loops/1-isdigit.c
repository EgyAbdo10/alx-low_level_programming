#include "main.h"
/**
 * _isdigit - check the letter case
 * @c: the letter
 * Return: 1 if upeer and 0 if lower
 */

int _isdigit(int c)
{
int i;
for (i = 65; i < 91; i++)
{
if (i == c)
{
return (0);
}
}
for (i = 97; i < 123; i++)
{
if (i == c)
{
return (0);
}
}
return (1);
}
