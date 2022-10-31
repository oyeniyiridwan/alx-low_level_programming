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
int fd, res, i = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY, O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
res = write(fd, text_content, i);
if (res == -1)
{
return (-1);
}
}
close(fd);
return (1);
}
