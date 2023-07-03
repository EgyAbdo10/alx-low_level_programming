#include "main.h"
/**
 * _strchr - blabla
 * @s: first
 * @c: second
 * Return: dest after modification
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
return (0);
}
