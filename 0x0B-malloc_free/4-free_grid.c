#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - free2 dimenstional grid
* @grid: parameter
* @height: parameter
*
* Return: Always 0  (Success)
*/

void free_grid(int **grid, int height)
{
int i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
}
