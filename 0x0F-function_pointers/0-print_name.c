#include "function_pointers.h"

/**
* print_name - print name
* @name: parameter
* @f: pointer to function
*
* Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
