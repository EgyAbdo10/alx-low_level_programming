#include "main.h"
/**
 * append_text_to_file - create a file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, j, length;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
for (length = 0; filename[length];)
length++;
}

else
{
close(fd);
return (1);
}

if (chmod(filename, 0664) != 0)
return (-1);

j = write(fd, text_content, length);
if (j == -1 || j != length)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
