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
int fd = open(filename, O_CREAT | O_WRONLY, 0600), i;
for (i = 0; text_content[i]; i++)
if (fd == -1 || filename == NULL)
return (-1);
int p = write(fd, text_content, i);
if (p == -1)
return (-1);
close(fd);
return (1);
}
