#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - run the whole program
 * @argc: number of args
 * @argv: args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*ptr)(int, int);
char *op_ptr;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
op_ptr = argv[2];
if (argv[2] == NULL || op_ptr[1] != '\0')
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (num2 == 0 && *op_ptr == '/')
{
printf("Error\n");
exit(100);
}
ptr = get_op_func(argv[2]);
printf("%d\n", ptr(num1, num2));
return (0);
}
