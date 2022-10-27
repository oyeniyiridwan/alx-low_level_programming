#include "main.h"

/**
* set_bit - set the value of bit at at index to 1
* @n: Integer
* @index: index
*
* Return: o (success);
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
return (-1);
*n |= (1 << index);
return (1);
}
