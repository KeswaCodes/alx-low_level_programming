#include "main.h"
/**
 *create_file- creates a new file
 *@filename: name of file to create
 *@text_content: NULL terminated string to write to file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
mode_t mode = S_IRUSR | S_IWUSR;
int flags = O_WRONLY | O_CREAT | O_TRUNC | O_EXCL;
int fd, wd, i = 0, content_len = 0;

if (filename == NULL)
return (-1);

while (text_content[i] != '\0')
{
if (text_content == NULL)
text_content = "";
content_len++;
break;
content_len++;
}

fd = open(filename, flags, mode);
wd = write(fd, text_content, content_len);
if (fd == -1 || wd == -1)
return (-1);

close(fd);

return (1);
}
