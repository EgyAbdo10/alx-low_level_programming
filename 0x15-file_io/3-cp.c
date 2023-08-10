#include "main.h"
/**
 * _close - close files
 * @fd: file descriptor to the closed file
 */
void _close(int fd)
{
int res;
res = close(fd);
if (res == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * alloc_mem - allocate memory to a buffer
 * @file_to: the file to append to
 * Return: buffer of size 1024
 */
char *alloc_mem(char *file_to)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
return (buffer);
}
/**
 * main - copy a file into another
 * @argc: number of args
 * @argv: arguments vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int fd_w, fd_r, bytes_from, bytes_to;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = alloc_mem(argv[2]);
fd_r = open(argv[1], O_RDONLY);
bytes_from = read(fd_r, buffer, 1024);
fd_w = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
do {
if (bytes_from == -1 || fd_r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
bytes_to = write(fd_w, buffer, bytes_from);
if (bytes_to == -1 || fd_w == -1)

