#include "main.h"
/**
 *create_file- creates a file
 *@filename: name of file to be created
 *@text_content: null terminated string to write to the file
 *Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t n_write;
size_t i = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0600);
if (fd == -1)
return (-1);

if (text_content == NULL)
{
n_write = write(fd, "", 1);
close(fd);
return (1);
}

while (text_content[i] != '\0')
{
i++;
}

n_write = write(fd, text_content, i);
if (n_write == -1)
{
close(fd);
return (-1);
}


close(fd);
return (1);
}
