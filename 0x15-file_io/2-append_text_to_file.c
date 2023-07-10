#include "main.h"
/**
 *append_text_to_file- appends text at the end of a file
 *@filename: name of the file
 *@text_content: NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, wd, content_len = 0, i = 0;
int flags = O_WRONLY | O_APPEND | O_CREAT, mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP;

if (text_content == NULL)
return (1);

if (filename == NULL)
return (-1);

fd = open(filename, flags, mode);

if (fd == -1)
return (-1);

while (text_content[i] != '\0')
content_len++;
i++;
wd = write(fd, text_content, content_len);
if (wd == -1)
return (-1);

close(fd);

return (1);

}
