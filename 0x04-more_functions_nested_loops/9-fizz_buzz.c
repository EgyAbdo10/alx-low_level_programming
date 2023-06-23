#include <stdio.h>
/**
 * main - check the letter case
 * @void: second number
 * Return: 1 if upeer and 0 if lower
 */

int main(void)
{
int i;
printf("%d ", 0);
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
putchar('\n');
return (0);
}
