#include "main.h"
#include <stdio.h>

/**
* print_array - print arrays
* @a: parameter
* @n: parameter
*
* Return: o Always(Success)
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if ( i != 0)
{
printf(", ");
}
printf("%d", *(a + i)); 
}
printf("\n");
}
