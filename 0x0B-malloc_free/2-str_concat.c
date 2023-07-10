#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - create an array of the same char
 * @s1: the size of the array
 * @s2: the size of the array
 * Return: the final string on success
 */
char *str_concat(char *s1, char *s2)
{
char *con_str;
int i = 0;
int j = 0;
int n = 0;
int f = 0;
while (s1[i] != 0)
{
i++;
}
i--;
while (s2[j] != 0)
{
j++;
}
con_str = malloc(i + j + 1);
if (con_str == NULL)
return (NULL);
while (n <= i)
{
con_str[n] = s1[n];
n++;
}
while (n <= j + i)
{
con_str[n] = s2[f];
n++;
f++;
}
return (con_str);
}
