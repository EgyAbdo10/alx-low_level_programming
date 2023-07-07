#include "main.h"
/**
 * _strcmp - cancatenate
 * @s1: first str
 * @s2: second str
 * Return: the concatenated pointer str
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int diff;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
diff = s1[i] - s2[i];
return (diff);
}
i++;
}
return (0);
}
