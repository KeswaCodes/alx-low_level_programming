#include "main.h"
/**
 *read_textfile-  reads a text file
 *and prints it to the POSIX standard output.
 *@filename: piinter to file to be printed
 *@letters: number of chars to be printed
 *Return: number of letters it could read or print
 *or 0 if file cannot be read or opened
 *or 0 if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char flags = O_RDONLY;
ssize_t fd, rd, wd;

char *ptr = malloc(sizeof(char) * letters);
if (ptr == NULL)
return (0);
if (filename == NULL)
return (0);

fd = open(filename, flags);
rd = read(fd, ptr, letters);
wd = write(STDOUT_FILENO, ptr, letters);

if (rd == -1 || wd == -1 || (size_t)wd < letters)
{
free(ptr);
return (0);
}

free(ptr);
return (wd);

}
