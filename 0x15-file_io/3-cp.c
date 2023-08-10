#include "main.h"
int main(int argc, char *argv[])
{
    FILE *file_ptr_r;
    int fd_w;
    char *buffer;
    if (argc != 3)
    {
        dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    buffer = malloc(sizeof(char) * 1024);
    file_ptr_r = fopen(argv[1], "r");
    fd_w = open(argv[2], O_WRONLY | O_CREAT , 0664);
    if (file_ptr_r == NULL)
    {
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    if (fd_w == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    while (true)
    {
    fgets(buffer, sizeof(buffer), file_ptr_r);
    write(fd_w, buffer, sizeof(buffer));
    if (feof(file_ptr_r)) break;
    }
    if (fclose(file_ptr_r) != 0)
    {
        dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fileno(file_ptr_r));
        exit(100);
    }
    if (close(fd_w) == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd_w);
        exit(100);
    }
    return (0);
}
