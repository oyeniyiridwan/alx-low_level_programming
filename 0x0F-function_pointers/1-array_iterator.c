#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - function that executes other function
* @array: parameter
* @action: pointer
* @size: array size
*
* Return: Always 0 (Success)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
