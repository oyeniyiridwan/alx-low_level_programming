#include "main.h"
#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
  int nb;
  

  
  nb = _atoi("98");
  
  printf("%d\n", nb);
  
  nb = _atoi("-402");
  
  printf("%d\n", nb);
  
  nb = _atoi("          ------++++++-----+++++--98");
  
  printf("%d\n", nb);
  
  nb = _atoi("214748364");
  
  printf("%d\n", nb);
  
  nb = _atoi("0");
  
  printf("%d\n", nb);
  
  nb = _atoi("Suite 402");
  
  printf("%d\n", nb);

return (0);  
}
