#include "main.h"

/**
* read_textfile - read a textfile and prints it to posix standard output
* @filename: file name
* @letters: length of string to read
*
* Return: Always 0 (success)
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd = open(filename, O_RDONLY), i;
char *buff = malloc(sizeof(char) * letters);
if (fd == -1 || filename == NULL)
return (0);
read(fd, buff, letters);
buff[letters] = '\0';
close(fd);
for (i = 0; buff[i]; i++)
{
int p = (write(1, &(buff[i]), 1));
if  (p == -1)
return (0);
}
free(buff);
return (i);
}
