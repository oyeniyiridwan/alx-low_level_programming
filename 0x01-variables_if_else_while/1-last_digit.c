#include <stdlib.h>
#include <stdio.h>
#include <time.h>




/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int n;
int digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit<6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
}
else if (digit>5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, digit);
}
else
{
printf("Last digit of %d is %d and is 0\n",n,digit);
}

/* your code goes there */
return (0);
}
