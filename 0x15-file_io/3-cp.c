#include "main.h"

/*function closes files*/
void close_fd(int fd);

/**
 *main- copies the contents of one file into another
 *@argc: argument count
 *@argv: string of arguments in command line
 *Return: 1 on success, -1 otherwise
 */

int main(int argc, char *argv[])
{
int fd_des, fd_source, source_len = 0;
const char *destination, *source;
ssize_t n_copied;
char source_buf[1024];

if (argc != 3)
{
perror("Usage: cp file_from file_to\n");
exit(97);
}
source = argv[1];
fd_source = open(source, O_RDONLY);
if (fd_source == -1)
{
dprintf(2, "Can't open file %s\n", argv[1]);
exit(98);
}

source_len = read(fd_source, source_buf, sizeof(source_buf));
if (source_len == -1)
{
dprintf(2, "Can't read from file %s\n", argv[1]);
close_fd(fd_source);
exit(98);
}

destination = argv[2];
fd_des = open(destination, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0664);
if (fd_des == -1)
{
dprintf(2, "Can't write to file %s\n", argv[2]);
close_fd(fd_source);
exit(99);
}

n_copied = write(fd_des, source_buf, source_len);
if (n_copied == -1 || source_len != n_copied)
{
dprintf(2, "Can't write to file %s\n", argv[2]);
close_fd(fd_source);
close_fd(fd_des);
exit(99);
}

close_fd(fd_source);
close_fd(fd_des);
return (1);
}
/**
 *close_fd- closes file descriptors
 *@fd: file descriptor to be closed
 *Return: void
 */

void close_fd(int fd)
{
int file_close;

file_close = close(fd);
if (file_close == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd);
exit(100);
}

return;
}
