#include "main.h"
/**
 * _strcat - cancatenate
 * @dest: first str
 * @src: second str
 * Return: the concatenated pointer str
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = src[j];
return (dest);
}
