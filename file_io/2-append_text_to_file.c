#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
* append_text_to_file - appends text at the end of a file.
* @filename: the name of the file.
* @text_content: the NULL terminated string to add at the end of the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0, written;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Open the file in append mode */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1) /* If the file does not exist or cannot be opened */
return (-1);

/* If text_content is not NULL, append it to the file */
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
