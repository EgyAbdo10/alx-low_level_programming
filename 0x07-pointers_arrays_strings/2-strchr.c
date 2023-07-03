#include "main.h"
#include <stddef.h>
/**
 * _strchr - blabla
 * @s: first
 * @c: second
 * Return: dest after modification
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i])
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return (NULL);
}
