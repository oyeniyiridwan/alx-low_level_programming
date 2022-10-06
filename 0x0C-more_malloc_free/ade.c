#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory for an array of nmemb
* elements of size bytes and return a pointer
* @nmenb: parameter
* @size: parameter
*
*Return: if fail returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a;
void **p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * sizeof(void *));
if (p == NULL)
return (NULL);
for (a = 0; a < nmemb; a++)
{
p[a] = malloc(size);
/**
if (p[a] == NULL)
{
while (--a)
free(p[--a]);
free(p);
return (NULL);
}
*/
}
return(p);
}
