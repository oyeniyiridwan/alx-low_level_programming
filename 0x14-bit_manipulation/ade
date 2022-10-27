#include "main.h"

/**
* get_bit - get the value of bit at at index
* @n: Integer
* @index: index
*
* Return: o (success);
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (n >= 1)
{
if (index == 0)
return (n & 1);
else
return (get_bit((n >> 1), index - 1));
}
return (-1);
}
