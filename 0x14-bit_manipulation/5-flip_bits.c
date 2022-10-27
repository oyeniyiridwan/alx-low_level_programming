#include "main.h"

/**
* flip_bits - return the number bit of flip to get n equal m
* @n: Integer
* @m: Integer
*
* Return: o (success);
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = 0, Xor = n ^ m;
while (Xor > 0)
{
i += (Xor & 1);
Xor >>= 1;
}
return (i);
}
