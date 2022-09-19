#include "main.h"

/**
* _strlen - returns the len of str
* @str: parameters
*
* Return: o Always(Success)
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
