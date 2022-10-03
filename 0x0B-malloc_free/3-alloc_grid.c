#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - initialize each element in gid to 0
* @width: parameter
* @height: parameter
*
* Return: Always 0  (Success)
*/

int **alloc_grid(int width, int height)
{
int i = 0;
int **length;
if (width <= 0 || height <= 0)
return (NULL);
length = (int **) malloc(height * sizeof(int *));
if (length == 0)
return (NULL);
while (i < height)
{
length[i] = malloc(width * sizeof(int));
if (length == NULL)
return (NULL);
i++;
}
return (length);
}
