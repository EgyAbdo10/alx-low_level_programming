#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the file name
 * @argc: nuber of args
 * @argv: arguments array
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
int count;
int sum = 0;
unsigned int i;
if (argc > 1)
{
for (count = 1; count < argc; count++)
{
for (i = 0; i < strlen(argv[count]); i++)
{
if (argv[count][i] < 48 || argv[count][i] > 57)
{
printf("Error\n");
return (1);
}
}
if (atoi(argv[count]) > 0)
sum += atoi(argv[count]);
}
printf("%d\n", sum);
return (0);
}
else
{
printf("0\n");
return (0);
}
}
