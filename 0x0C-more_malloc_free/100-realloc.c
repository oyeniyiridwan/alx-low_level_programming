#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocate memory
* @ptr: parameter
* @old_size: parameter
* @new_size: parameter
*
*Return: if fail returns NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int a, b;
unsigned char *p;
if (ptr == NULL)
{
ptr = malloc(new_size)
if (ptr == NULL)
return (NULL);
return (ptr);
}
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (old_size < new_size)
a = old_size;
else
a = new_size;
for (b = 0; b < a; b++)
p[b] = ((char *)ptr)[b];
free(ptr);
return (p);
}
