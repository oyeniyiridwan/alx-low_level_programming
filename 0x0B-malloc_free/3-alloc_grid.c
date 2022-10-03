#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - initialize each element in grid to 0
* @width: parameter
* @height: parameter
*
* Return: Always 0  (Success)
*/

int **alloc_grid(int width, int height)
{
int i;
int **length;
if (width <= 0 || height <= 0)
return (NULL);
length = (int **) malloc(height * sizeof(int *));
if (length == 0)
return (NULL);
for (i = 0; i < height; i++)
{
length[i] = malloc(width * sizeof(int));
if (length[i] == NULL)
{
while (--i >= 0)
free(length[i]);
free(length);
return (NULL);
}
}
return (length);
}
