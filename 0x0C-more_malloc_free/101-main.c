#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned int q = 0, w;
char r[] = "23";
 char r2[] = "28e65803436508436";
char *p;
 p = recursion(r, r2);
  w = strlen(p);
  printf("length in %d\n", w);
  printf("first %c\n", p[0]);
  printf("last %c\n", p[w-1]);
  while (q < w)
    {
      printf("%c", p[q]);
      q++;
    }
  
    return (0);
}
