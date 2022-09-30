#include "main.h"

/**
* _strncpy - copy n character of src to positon in dest
* @dest: parameter
* @src: parameter
* @n: parameter
*
* Return: Always 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
int srclen = _strlen(src);

if (n < srclen)
{
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
else
{
for (i = 0; i < n; i++)
{
if (i < srclen)
dest[i] = src[i];
else
dest[i] = '\0';
}
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
