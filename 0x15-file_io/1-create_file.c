#include "main.h"

/**
* create_file - create a textfile and write into it
* @filename: file name
* @text_content: text content
*
* Return: Always (1) success
*/

int create_file(const char *filename, char *text_content)
{
int fd, i = 0, p;
if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[i] != '\0')
{
i++;
}
p = write(fd, text_content, i);
if (p == -1)
{
return (-1);
}
}
close(fd);
return (1);
}
