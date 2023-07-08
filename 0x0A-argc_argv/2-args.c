#include <stdio.h>
/**
 * main - prints the file name
 * @argc: nuber of args
 * @argv: arguments array
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
int count;
(void)argc;
for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
