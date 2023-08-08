#include "main.h"
/**
 * append_text_to_file - create a file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, j, i = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (filename[i])
i++;
}
fd = open(filename, O_WRONLY | O_APPEND);
j = write(fd, text_content, i);
if (fd == -1 || j == -1)
return (-1);
close(fd);
return (1);
}
