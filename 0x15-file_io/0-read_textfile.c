#include "main.h"
/**
 * read_textfile - read a text file and print it to the standard output
 * @filename: the file name
 * @letters: number of letters to be read
 * Return: numbers of letters wrote (on success) or 0 (on failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t con_len_read, con_len_write;
char *content = malloc(sizeof(char) * letters);
int fd;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
con_len_read = read(fd, content, letters);
if (con_len_read == -1)
return (0);
con_len_write = write(STDOUT_FILENO, content, con_len_read);
if (con_len_write != con_len_read)
return (0);
else
return (con_len_write);
}
