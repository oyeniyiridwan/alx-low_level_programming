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
int fd = open(filename, O_WRONLY | O_APPEND), i;
for (i = 0; text_content[i]; i++)
if (fd == -1 || filename == NULL)
return (-1);
if (text_content != NUUL)
{
write(fd, text_content, i);
}
close(fd);
return (1);
}
