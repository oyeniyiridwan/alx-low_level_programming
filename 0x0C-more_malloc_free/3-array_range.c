#include "main.h"
#include <stdlib.h>

/**
* array_range - create an array from min to max
* @min: parameter
* @max: parameter
*
*Return: if fail returns NULL
*/

int *array_range(int min, int max)
{
int *p, a, b;
if (min > max)
return (NULL);
a = max - min + 1;
p = malloc(a *sizeof(int));
if (p == NULL)
return (NULL);
for (b = 0; b < a; b++)
{
p[b] = min + b;
}
return (p);
}
