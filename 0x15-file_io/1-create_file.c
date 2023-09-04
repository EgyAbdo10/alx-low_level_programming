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
 * create_file - create a file and put content into  it
 * @filename: the file name
 * @text_content: the content to put into the file with
 * Return: 1 (on success) or 0 (on failure)
 */
int create_file(const char *filename, char *text_content)
{
int fd, con_len_write = -1, length;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
if (fd == -1)
return (-1);
length = my_strlen(text_content);
if (length == -1)
return (1);
con_len_write = write(fd, text_content, length);
if (con_len_write != length)
return (-1);
else
return (1);
}
