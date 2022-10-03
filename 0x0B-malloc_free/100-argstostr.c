#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatenates all arguments used with this file
* @ac: parameter
* @av: parameter
*
* Return: NULL if failure
*/

char *argstostr(int ac, char **av)
{
int i, u, a = 0, w = 0;
char *result;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac;  i++)
{
int j = 0;
while (av[i][j] != '\0')
{
w++;
j++;
}
}
result = malloc((w + ac + 1) * sizeof(char));
for (u = 0; u < ac; u++)
{
int p = 0;
while (av[u][p] != '\0')
{
result[a] = av[u][p];
a++;
p++;
}
result[a] = '\n';
a++;
}
result[a] = '\0';
return (result);
}
