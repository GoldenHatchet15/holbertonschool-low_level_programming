#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

void close_file(int fd, char *filename);
void check_args(int argc, char *argv[]);

/**
* main - Copies the content of a file to another file.
* @argc: The number of arguments.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success, or exits with specific codes on failure.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, rd, wr;
char buffer[BUF_SIZE];

check_args(argc, argv); /* Check arguments count */

/* Open the source file */
fd_from = open(argv[1], O_RDONLY);
if (fd_from < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* Open the destination file */
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to < 0)
{
close_file(fd_from, argv[1]);
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

/* Read from source and write to destination */
while ((rd = read(fd_from, buffer, BUF_SIZE)) > 0)
{
wr = write(fd_to, buffer, rd);
if (wr != rd)
{
close_file(fd_from, argv[1]);
close_file(fd_to, argv[2]);
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

if (rd < 0)
{
close_file(fd_from, argv[1]);
close_file(fd_to, argv[2]);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

close_file(fd_from, argv[1]);
close_file(fd_to, argv[2]);
return (0);
}

/**
* close_file - Closes a file descriptor and handles errors.
* @fd: The file descriptor to close.
* @filename: The name of the file associated with the file descriptor.
*/
void close_file(int fd, char *file_to)
{
if (close(fd) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

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
