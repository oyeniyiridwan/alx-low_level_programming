#include <stdio.h>
#include <stdlib.h>

/**
* main - how many coin do you get from a cent
* @argc: parameter
* @argv: parameter
*
* Return: Always o (Success)
*/


int main(int argc, char **argv)
{
int sum = 0;
if (argc == 2)
{
int w = atoi(argv[1]);
if (w < 0)
{
printf("%d", 0);
return (1);
}
sum = sum + (w / 25);
w = w % 25;
sum = sum + (w / 10);
w = w % 10;
sum = sum + (w / 5);
w = w % 5;
sum = sum + (w / 2);
w = w % 2;
sum = sum + w;
printf("%d\n", sum);
return (0);
}
printf("Error\n");
return (1);
}
