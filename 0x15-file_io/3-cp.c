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
while (str[len] != '\0' || ((str + len) == NULL))
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
 * alloc_mem - allocate memory to a buffer
 * @filename: the file to write into
 * Return: buffer of size 1024
 */
char *alloc_mem(char *filename)
{
char *buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
return (buf);
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
char *container;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
container = alloc_mem(av[2]);
fd_r = open(av[1], O_RDONLY);
fd_w = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0644);
con_len_read = read(fd_r, container, 1024);
do {
if ((con_len_read == -1) || (fd_r == -1))
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
free(container);
exit(98);
}
con_len_write = write(fd_w, container, my_strlen(container));
if ((con_len_write != my_strlen(container)) || (fd_w == -1))
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
free(container);
exit(99);
}
con_len_read = read(fd_r, container, 1024);
fd_w = open(av[2], O_WRONLY | O_APPEND);
} while (con_len_read != 0);
free(container);
close_file(fd_r);
close_file(fd_w);
return (0);
}
