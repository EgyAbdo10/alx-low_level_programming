#include "main.h"
#include <string.h>
/**
 * main - print _putchar
 * Return: (0) success
 */
int main(void)
{
unsigned int i;
char text[] = "_putchar";
for (i = 0; i < strlen(text); i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
