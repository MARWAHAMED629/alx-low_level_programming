#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *create_buffer(void);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
    char *buffer;

    buffer = malloc(sizeof(char) * 1024);

    if (buffer == NULL)
    {
        perror("Error: Can't allocate memory");
        exit(99);
    }

    return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
    int c;

    c = close(fd);

    if (c == -1)
    {
        perror("Error: Can't close file");
        exit(100);
    }
}

int main(int argc, char *argv[])
{
    int from, to, r, w;
    char *buffer;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    buffer = create_buffer();
    from = open(argv[1], O_RDONLY);

    if (from == -1)
    {
        perror("Error: Can't read from file");
        free(buffer);
        exit(98);
    }

    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    if (to == -1)
    {
        perror("Error: Can't write to file");
        free(buffer);
        close_file(from);
        exit(99);
    }

    while ((r = read(from, buffer, 1024)) > 0)
    {
        w = write(to, buffer, r);

        if (w == -1)
        {
            perror("Error: Can't write to file");
            free(buffer);
            close_file(from);
            close_file(to);
            exit(99);
        }
    }

    free(buffer);
    close_file(from);
    close_file(to);

    return (0);
}
