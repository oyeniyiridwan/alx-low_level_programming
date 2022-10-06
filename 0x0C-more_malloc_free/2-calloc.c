#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory for an array of nmemb
* elements of size bytes and return a pointer
* @nmemb: parameter
* @size: parameter
*
*Return: if fail returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (a = 0; a < nmemb * size; a++)
{
p[a] = 0;
}
return ((void *)p);
}
