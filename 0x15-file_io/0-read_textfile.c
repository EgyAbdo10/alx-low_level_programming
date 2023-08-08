#include "main.h"
/**
 * read_textfile - read files
 * @filename: the file name
 * @letters: the number of letters to read
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, j, i;
char len[letters];
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (j == -1)
return (0);
j = read(fd, len, letters);
if (j == -1)
return (0);
i = write(1, len, letters);
if (i < letters)
return (0);
close(fd);
return (j);
}
