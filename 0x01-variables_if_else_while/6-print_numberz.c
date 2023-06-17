#include <stdio.h>
#include <string.h>
/**
 * main - print all digits from 0 to 9
 * Return: 0 (success)
 */

int main(void)
{
char nums[] = ("0123456789");
unsigned int i;
for (i = 0; i < strlen(nums); i++)
{
putchar(nums[i]);
}
putchar('\n');
return (0);
}
