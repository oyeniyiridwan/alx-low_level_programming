#include "main.h"

/**
* _strncat - concatnates n characters of src to dest
* @dest: parameter
* @src: parameter
* @n: parameter
*
* Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
int i;
int destlen = _strlen(dest);
int srclen = _strlen(dest);
if (n < srclen)
{
for (i = 0; i < n; i++)
{
dest[destlen + i] = src[i];
}
dest[destlen + n] = '\0';
}
else
{
for (i = 0; i < srclen; i++)
{
dest[destlen + i] = src[i];
}
dest[destlen + srclen] = '\0';
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
