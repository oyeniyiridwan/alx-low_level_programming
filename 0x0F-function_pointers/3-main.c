#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - perform actions
* @argc: size of entered arguments
* @argv: pointers to arrays of arguments
*
*Return: print Error if it fails
*/

int main(int argc, char **argv)
{
int (*f)(int, int);
char a;
if (argc != 4)
{
printf("Error\n"),
exit(98);
}
f = get_op_func(argv[2]);
if (!f)
{
printf("Error\n"),
exit(99);
}
a = argv[2][0];
if ((a == '/' || a == '%') && (atoi(argv[2]) == 0))
{
printf("Error\n");
exit(100);
}
printf("%i\n", f(atoi(argv[1]), atoi(argv[3])));
return (1);
}
