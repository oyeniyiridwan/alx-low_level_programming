#include "main.h"


/**
* factorial - return the result of factorial n
* @n: parameter
*
* Return: Always 0 (Success)
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 1 || n == 0)
return (1);
return (n * factorial(n - 1));
}
