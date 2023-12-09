#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#define BUF_SIZE 1024


/**
 * check_args - Checks the number of arguments and handles errors.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 */
void check_args(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }
}
