#include "main.h"
/**
 * create_file - create a file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
int fd, j, i = 0;
while (text_content[i])
i++;
if (!(filename) || !(text_content))
return (-1);
fd  = open(filename, O_WRONLY | O_CREAT , 0600);
if (fd == -1)
return (-1);
j = write(fd, text_content, i);
if (j == -1)
return (-1);

return (1);
}
