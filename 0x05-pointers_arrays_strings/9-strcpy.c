#include "main.h"
#include <stdio.h>

/**
* _strcpy - copy src to dest
* @dest: parameter
* @src: parameter
*
* Return: 0 Always(Success)
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
return (dest);
}
