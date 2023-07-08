#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the file name
 * @argc: nuber of args
 * @argv: arguments array
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
int count;
int mul = 1;
if (argc >= 3)
{
for (count = 1; count < argc; count++)
{
mul *= atoi(argv[count]);
}
printf("%d\n", mul);
}
else
{
printf("Error\n");
}
return (0);
}
