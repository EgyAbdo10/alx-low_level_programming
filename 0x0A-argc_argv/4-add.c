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
int sum = 0;
if (argc > 1)
{
for (count = 1; count < argc; count++)
{
if (atoi(argv[count]) == 0)
{
printf("Error\n");
return (1);
}
else
{
if (atoi(argv[count]) > 0)
sum += atoi(argv[count]);
}
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
