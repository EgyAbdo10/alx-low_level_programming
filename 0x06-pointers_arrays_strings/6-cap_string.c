#include "main.h"
/**
 * cap_string - cancatenate
 * @a: first str
 * Return: the concatenated pointer str
 */
char *cap_string(char *a)
{
int i = 0;
int j;
int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
while (a[i] != '\0')
{
if (a[i] <= 122 && a[i] >= 97)
{
for (j = 0; j < 13; j++)
{
if (a[i - 1] == sep[j])
{
a[i] -= 32;
}
}
}
i++;
}
return (a);
}
