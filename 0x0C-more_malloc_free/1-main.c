#include "main.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)
  
{
  
  char *concat;
  

  
  concat = string_nconcat("Best ", "School !!!", 6);
  
  printf("%s\n", concat);
  printf("%ld\n", strlen(concat));
  
  free(concat);
  
  return (0);
  
}
