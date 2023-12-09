#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

#define BUF_SIZE 1024

void err_exit(int code, const char *format, ...) {
va_list args;
va_start(args, format);
vfprintf(stderr, format, args);
va_end(args);
exit(code);
}

int main(int argc, char *argv[]) {
if (argc != 3) {
err_exit(97, "Usage: cp file_from file_to\n");
}

const char *file_from = argv[1];
const char *file_to = argv[2];

struct stat file_from_stat;
if (stat(file_from, &file_from_stat) != 0) {
err_exit(98, "Error: Can't read from file %s\n", file_from);
}

int file_from_fd = open(file_from, O_RDONLY);
if (file_from_fd == -1) {
err_exit(98, "Error: Can't read from file %s\n", file_from);
}

int file_to_fd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (file_to_fd == -1) {
close(file_from_fd);
err_exit(99, "Error: Can't write to file %s\n", file_to);
}

char buf[BUF_SIZE];
ssize_t bytes_read;
while ((bytes_read = read(file_from_fd, buf, BUF_SIZE)) > 0) {
if (write(file_to_fd, buf, bytes_read) != bytes_read) {
close(file_from_fd);
close(file_to_fd);
err_exit(99, "Error: Can't write to file %s\n", file_to);
}
}

if (bytes_read == -1) {
close(file_from_fd);
close(file_to_fd);
err_exit(98, "Error: Can't read from file %s\n", file_from);
}

if (close(file_from_fd) != 0) {
close(file_to_fd);
err_exit(100, "Error: Can't close fd %d\n", file_from_fd);
}

if (close(file_to_fd) != 0) {
err_exit(100, "Error: Can't close fd %d\n", file_to_fd);
}

return 0;
}
