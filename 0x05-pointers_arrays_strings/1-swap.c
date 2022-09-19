#include "main.h"

/**
* swap_int - swap a and b
* @a: parameter
* @b: parameter
*
* Return: o Always(Success)
*/

void swap_int(int *a, int *b)
{
int p = *a;
int q = *b;
*a = q;
*b = p;
}
