#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)
  
{
  
  int n;
  

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
  if (n<0)
    {
      printf("%ld is negative\n",n)
    }
  else if (n>0)
    {
      printf("%ld is positive\n",n)
    }
  else
    {
      printf("%ld is zero\n",n)
    }
  
  
  /* your code goes there */
  
  return (0);
  
}
