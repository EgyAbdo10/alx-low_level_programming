#include <stdio.h>
#include <stdlib.h>
/**
 * check_null - create an array of the same char
 * @new_str: the size of the array
 * Return: the final string on success
 */
char *check_null(char *new_str)
{
if (new_str == NULL)
new_str = "";
return (new_str);
}
/**
 * _strlen - create an array of the same char
 * @str: the size of the array
 * Return: the final string on success
 */
unsigned int _strlen(char *str)
{
unsigned int i = 0;
while (str[i])
{
i++;
}
return (i);
}
/**
 * string_nconcat - create an array of the same char
 * @s1: the size of the array
 * @s2: the size of the array
 * @n: number of bytes taken from s2
 * Return: the final string on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, f, j, all, start;
char *new_str;
s1 = check_null(s1);
s2 = check_null(s2);
i = _strlen(s2);
f = _strlen(s1);
all = i + f + 1;
if (n >= (i))
{
new_str = malloc(sizeof(char) * (all));
if (new_str == NULL)
return (NULL);
for (j = 0; j < f; j++)
{
new_str[j] = s1[j];
}
for (i = 0; j < all; i++, j++)
{
new_str[j] = s2[i];
}
}
else if (n < i)
{
new_str = malloc(sizeof(char) * (n + i));
if (new_str == NULL)
return (NULL);
for (j = 0; j < f; j++)
{
new_str[j] = s1[j];
}
for (start = 0; start < (n); j++, start++)
{
new_str[j] = s2[start];
}
new_str[j] = 0;
}
return (new_str);
}
