#include "main.h"

/**
* main - check the code
* @ac: length of argument
* @av: pointer to argument
*
* Return: Always 0.
*/

int main(int ac, char **av)
{
int fd, fd2, res, p, i;
char *buff  = malloc(sizeof(char) * 1024);
if (buff == NULL)
return (-1);
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd = open(av[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
exit(98);
}
i = read(fd, buff, 1024);
p  = close(fd);
if (p == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i", p);
exit(100);
}
fd2 = open(av[2], O_CREAT | O_WRONLY | 0_ TRUNC, 664);
res =  write(fd2, buff, i);
if (fd2 == -1 || res == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write from file %s", av[2]);
exit(100);
}
p = close(fd2);
if (p == -1)
{
dprintf(2, "Error: Can't close fd %i", p);
exit(100);
}
free(buff);
return (0);
}
