#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* create_file - creates a file.
* @filename: the name of the file to create.
* @text_content: a NULL terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0, written;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Open the file with appropriate flags and permissions */
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

/* If text_content is not NULL, write it to the file */
if (text_content != NULL)
{
/* Calculate the length of text_content */
while (text_content[len])
len++;

/* Write text_content to the file */
written = write(fd, text_content, len);
if (written == -1)
{
close(fd);
return (-1);
}
}

/* Close the file */
close(fd);
return (1);
}
