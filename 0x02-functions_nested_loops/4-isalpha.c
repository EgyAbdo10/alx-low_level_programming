#include "main.h"
/**
 * _isalpha - alpha
 * Return - void
 * @c: the char in ascii
 */
int _isalpha(int c)
{
int i;
for (i = 97; i < 123; i++)
{
if (i == c)
{
return (1);
}
}
for (i = 65; i < 91; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}
