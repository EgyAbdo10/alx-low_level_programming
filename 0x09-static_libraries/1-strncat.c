#include "main.h"
/**
 * _strncat - cancatenate
 * @dest: first str
 * @src: second str
 * @n: number of bytes taken from src
 * Return: the concatenated pointer str
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
if (i > n)
{
while (j < n)
{
dest[i] = src[j];
j++;
i++;
}
}
else if (i <= n)
{
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = src[j];
}
return (dest);
}
