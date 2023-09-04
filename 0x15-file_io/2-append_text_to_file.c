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
 * append_text_to_file - append text to a file
 * @filename: the filename
 * @text_content: the content to append to the file
 * Return: 1 (on success) or -1 (on failure)
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, length, con_len_write;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
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
