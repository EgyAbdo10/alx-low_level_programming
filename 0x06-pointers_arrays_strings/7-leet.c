#include "main.h"
/**
 * leet - cancatenate
 * @a: first str
 * Return: the concatenated pointer str
 */
char *leet(char *a)
{
int i = 0;
int j;
int f;
int let[] = {97, 101, 108, 111, 116};
int ret[] = {52, 51, 49, 48, 55};
while (a[i] != '\0')
{
for (j = 0; j < 5; j++)
{
if (a[i] == let[j] || a[i] + 32 == let[j])
{
f = j;
a[i] = ret[f];
}
}
i++;
}
return (a);
}
