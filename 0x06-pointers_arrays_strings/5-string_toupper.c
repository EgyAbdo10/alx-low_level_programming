#include "main.h"
/**
 * string_toupper - cancatenate
 * @a: first str
 * Return: the concatenated pointer str
 */
char *string_toupper(char *a)
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] >= 97 && a[i] <= 122)
{
a[i] -= 32;
}
i++;
}
return (a);
}
