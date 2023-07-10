#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - create an array of the same char
 * @str: the size of the array
 * Return: the final string on success
 */
char *_strdup(char *str)
{
int len = 0;
int i;
char *new_str;
if (str == NULL)
return (NULL);
while (str[len] != 0)
{
len++;
}
new_str = malloc(sizeof(char) * len);
if (new_str == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
new_str[i] = str[i];
}
return (new_str);
}
