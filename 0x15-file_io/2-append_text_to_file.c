#include "main.h"
/**
 * append_text_to_file - create a file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file_ptr = fopen(filename, "a");

if (file_ptr == NULL)
return (-1);

if (text_content != NULL)
{
fputs(text_content, file_ptr);
}

fclose(file_ptr);

if (chmod(filename, 0664) != 0)
return (-1);

return (1);
}
