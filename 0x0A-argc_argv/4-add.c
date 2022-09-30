#include <stdio.h>
#include <stdlib.h>

/**
* main - print the sum of arguments if int else print Error
* @argc: parameter
* @argv: parameter
*
* Return: Always o (Success)
*/


int main(int argc, char **argv)
{
int i;
int sum = 0;
if (argc <= 1)
{
printf("%d\n", sum);
return (0);
}
for (i = 1; i < argc; i++)
{
char *w;
int p = 0;
w = argv[i];
while (w[p] != '\0')
{
if (w[p] >= '0' && w[p] <= '9')
p++;
else
{
printf("Error\n");
return (1);
}
}
sum += atoi(w);
}
printf("%d\n", sum);
return (0);
}
