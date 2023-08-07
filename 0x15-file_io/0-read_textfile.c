#include "main.h"
/**
 *read_textfile- reads a text file & prints to stout
 *@filename: name of file
 *@letters: number of chars to be read & printed
 *Return: actual number of letters read & printed (success)
 *or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read, n_write;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

n_read = read(fd, buffer, letters);

if (n_read == -1)
{
close(fd);
free(buffer);
return (0);
}

n_write = write(STDOUT_FILENO, buffer, n_read);
if (n_write == -1)
{
close(fd);
free(buffer);
return (0);
}
free(buffer);
close(fd);
return (n_read);

}
