#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUF_SIZE 1024

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 * @filename: The name of the file associated with the file descriptor.
 */
void close_file(int fd, char *filename)
{
    if (close(fd) < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}
