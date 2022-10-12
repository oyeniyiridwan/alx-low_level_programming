#include "3-calc.h"

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
if (argc != 4)
{
printf("Error\n"),
exit(98);
}
f = get_op_func(argv[2]);
if (!f || (strlen(argv[2]) > 1))
{
printf("Error\n"),
exit(99);
}
printf("%i\n", f(atoi(argv[1]), atoi(argv[3])));
return (0);
}
