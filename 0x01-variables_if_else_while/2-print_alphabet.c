#include <stdio.h>
#include <string.h>
/**
 * main - print the alphbet
 * Return: 0 (success)
 */

int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
unsigned int i = 0;
while (i < strlen(str))
{
putchar(str[i]);
i++;
}
putchar("\n");
return (0);
}
