#include "main.h"

/**
* append_text_to_file - append text to file
* @filename: file name
* @text_content: text content
*
* Return: Always (1) success
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd = open(filename, O_WRONLY | O_APPEND), res, i;
for (i = 0; text_content[i]; i++)
if (filename == NULL)
return (-1);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
res = write(fd, text_content, i);
if (res == -1)
{
close(fd);
write(STDOUT_FILENO, "fails", 5);
return (-1);
}
}
close(fd);
return (1);
}
