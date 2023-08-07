#include "main.h"
/**
 *append_text_to_file- appends text at the end of a file
 *@filename: name of the file
 *@text_content: NULL terminated string to append to file
 *Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, append_len = 0;
ssize_t n_write;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

while (text_content[append_len] != '\0')
append_len++;

if (text_content != NULL)
{
n_write = write(fd, text_content, append_len);
if (n_write == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}

else
{
close(fd);
return (1);
}

}
