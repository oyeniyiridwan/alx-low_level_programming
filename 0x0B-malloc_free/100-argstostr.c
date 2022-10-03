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
  int i, w = 0;
  char *result;
if (ac == 0 || av == NULL)
return (NULL);
result = malloc(ac * sizeof(av));

 for (i = 0; i < ac;  i++)
   {
     int j = 0;
     while (av[i][j] != '\0')
       {
	 result[w] = av[i][j];
	 w++;
	 j++;
       }
     result[w] = '\n';
       w++;
   }
   return (result);
}