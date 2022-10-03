#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - create an array of size and initialize it to c
* @size: parameter
* @c: parameter
*
* Return: Always 0  (Success)
*/

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
p = malloc(size * sizeof(char));
if (size == 0 || p == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
