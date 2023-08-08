#ifndef main_h
#define main_h
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>
ssize_t read_textfile(const char *filename, size_t letters);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
int i;
i = write(1, &c, 1);
return (i);
}
#endif
