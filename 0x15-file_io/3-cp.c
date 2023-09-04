#include "main.h"
/**
 * my_strlen - get the length of a string
 * @str: the string
 * Return: length of the string or -1 (on failure)
 */
int my_strlen(char *str)
{
int len = 0;
if (str == NULL)
return (-1);
while (str[len] != '\0')
len++;
return (len);
}
/**
 * close_file - close file
 * @file_descriptor: file descriptor
 */
void close_file(int file_descriptor)
{
int close_status = close(file_descriptor);
if (close_status == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_descriptor);
exit(100);
}
}
/**
 * main - copy file into another
 * @ac: number of args
 * @av: arguments vector
 * Return: exit status
 */
int main(int ac, char *av[])
{
int fd_r, fd_w, con_len_read, con_len_write;
char *container = malloc(sizeof(char) * 1024);
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_r = open(av[1], O_RDONLY);
fd_w = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 00664);
if (fd_r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
con_len_read = read(fd_r, container, 1024);
do {
if (con_len_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
con_len_write = write(fd_w, container, 1024);
if (con_len_write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
con_len_read = read(fd_r, container, 1024);
} while (con_len_read != 0);
close_file(fd_r);
close_file(fd_w);
return (0);
}
