#include "main.h"
/**
 * rev_string - reverse string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
int length = 0;
int j = 0;
char temp;
int length2;
while (s[length] != '\0')
{
length++;
}
length -= 1;
length2 = length;
while (length > (length2 / 2))
{
temp = s[length];
s[length] = s[j];
s[j] = temp;
length--;
j++;
}
}
