#include "main.h"
#include <stdio.h>

/**
* _strstr - point to the beginning occurence of substring needle in haystack
* @needle: parameter
* @haystack: parameter
*
* Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
char *h = haystack;
char *n = needle;
while (*h)
{
n = needle;
h = haystack;
while (*n)
{
if (*h == *n)
{
n++;
h++;
}
else
break;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
