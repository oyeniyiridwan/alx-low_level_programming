#include "main.h"

/**
* _strcat - concatnates  dest and src
* @dest: parameter
* @src: parameter
*
* Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
int i;
int destlen = _strlen(dest);
int srclen = _strlen(src);

for (i = 0; i <= srclen; i++)
{
dest[destlen + i] = src[i];
}
return (dest);
}

/**
* _strlen - returns length of str
* @str: parameter
*
* Return: Always an int
*/
int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
