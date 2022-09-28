#include "main.h"


/**
* _sqrt_recursion - retur square root if n
* @n: parameter
*
* Return: Always 0 (Success)
*/

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);
if (n < 0)
return (-1);
return (square(n, n));
}




/**
* square - returns square root of p
* @p: parameter
* @w: parameter
*
* Return: Always 0 (Success)
*/

int square(int w, int p)
{
if (w == 0)
return (-1);
if ((w * w) != p)
return (square(w - 1, p));
return (w);
}
