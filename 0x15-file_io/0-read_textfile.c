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
int fd = open(filename, O_RDONLY), res, p;
char *buff = malloc(sizeof(char) * letters);
if (filename == NULL)
return (0);
if (fd == -1)
return (0);
if (buff == NULL)
return (0);
res = read(fd, buff, letters);
p = write(1, buff, res);
if (p == -1 || res == -1)
{
free(buff);
return (0);
}
free(buff);
close(fd);
return (p);
}
