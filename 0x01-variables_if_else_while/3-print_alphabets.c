#include <stdio.h>
#include <string.h>
/**
 * main - prints alphbet in upper and lower case
 * Return: 0 (success)
 */
int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < strlen(str); i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
