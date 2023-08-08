#include "main.h"
/**
 * read_textfile - read files
 * @filename: the file name
 * @letters: the number of letters to read
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, j;
size_t i;
char *len;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
len = malloc(sizeof(char) * letters);
j = read(fd, len, letters);
if (j == -1)
return (0);
i = write(STDOUT_FILENO, len, j);
free(len);
close(fd);
return (i);
}
