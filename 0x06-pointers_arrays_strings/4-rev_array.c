#include "main.h"

/**
* reverse_array - reverse elemet in array
* @a: parameter
* @n: parameter
*
* Return: Always 0 (Success)
*/

void reverse_array(int *a, int n)
{
int i;
int q = n / 2;
for (i = 0; i <= q; i++)
{
int w;
w = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = w;
}
}
