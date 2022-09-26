#include "main.h"
#include <stdio.h>

/**
*print_diagsums - print sum of left diagonal and that of right
* @a: parameter
* @size: parameter
*
* Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
int i, j, left = 0, right = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
left += *(a + (size * i) + j);
if ((i + j) == (size - 1))
right += *(((size * i) + a) + j);
}
}
printf("%i, %i\n", left, right);
}
