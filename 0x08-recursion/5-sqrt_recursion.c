#include "main.h"

/**
* _sqrt_recursion - retur square root if n
* @n: parameter
*
* Return: Always 0 (Success)
*/

int _sqrt_recursion(int n)
{
int i = 0;
int q = n;
int z = 1;
if (n == 0 || n == 1)
return (n);
if (n < 0)
return (-1);
while (q > 9)
{
q = q / 10;
i++;
}
if (i % 2 == 0 && i > 2)
{
i = (i / 2) - 1;
while(i - 1 > 0)
{
z = z * 10;
i--;
}
}
else if (i % 2 != 0 && i > 2)
{
i = i / 2;
while(i > 0)
{	
z = z * 10;
i--;
}
}
return (square(n / z , n));
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
