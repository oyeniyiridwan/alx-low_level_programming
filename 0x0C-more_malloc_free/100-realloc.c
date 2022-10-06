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
/*unsigned int a, b*/
void *p;
if (ptr == NULL)
return (NULL);
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
/**if (old_size < new_size)a = old_size;elsea = new_size;*/
p = ptr;
return (p);
}
