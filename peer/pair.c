#include <stdio.h>
#include <stdlib.h>

/**
 */

int main(void)
{
  char array[10][3] = {"OG","OO", "HO", "KF", "RO", "CU", "CL", "RM", "SN", "No"};
  int min = 0;
  int max = 9;
  int p;
  int rand1, rand2;
 
  for (p = 0; p < 4; p++)
    {
      srand(12); 
      rand1 = min + (rand()%(max-min));
      while (array[rand1][0] == '\0')
	rand1 = min + (rand()%(max-min));
      rand2 = min+ (rand()%(max - min));
      while (array[rand2][0] == '\0' || rand2 == rand1)
	rand2 = min + (rand()%(max-min));
      printf("%s and %s\n", array[rand1], array[rand2]);
	array[rand2][0] = '\0';
      array[rand1][0] = '\0';
    }
  return (0);
}


  
