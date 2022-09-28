#include "main.h"


/**
* is_prime_number - return 1 if n is a prime number else 0
* @n: parameter
*
* Return: Always 0 (Success)
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime(n - 1, n));
}




/**
* prime -check if p is prime
* @p: parameter
* @w: parameter
*
* Return: Always 0 (Success)
*/

int prime(int w, int p)
{
if (w == 1)
return (1);
if ((p % w) == 0)
return (0);
return (prime(w - 1, p));
}
