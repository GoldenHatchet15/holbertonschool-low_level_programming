#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the name of the file to read
* @letters: the number of letters it should read and print
*
* Return: the actual number of letters it could read and print,
*         0 if file cannot be opened or read, filename is NULL, or write fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nread, nwritten;
char *buffer;
/* Check if filename is NULL */
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);/* Open the file */
if (fd == -1) /* Check if opening the file failed */
{
return (0);
}
/* Allocate memory for the buffer */
buffer = malloc(sizeof(char) * (letters));
if (buffer == NULL)
{
close(fd);
return (0);
}
/* Read from the file */
nread = read(fd, buffer, letters);
if (nread == -1)
{
free(buffer);
close(fd);
return (0);
}
/* Write to the standard output */
nwritten = write(STDOUT_FILENO, buffer, nread);
if (nwritten == -1 || nwritten != nread)
{
free(buffer);
close(fd);
return (0);
}
/* Clean up */
free(buffer);
close(fd);
return (nwritten);
}
