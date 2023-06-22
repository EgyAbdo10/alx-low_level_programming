#include "main.h"
/**
 * _isupper - check the letter case
 * @letter: the letter
 * Return: 1 if upeer and 0 if lower
 */

int _isupper(int letter)
{
int i;
for (i = 65; i < 91; i++)
{
if (i == letter)
{
return (1);
}
return (0);
}
}
