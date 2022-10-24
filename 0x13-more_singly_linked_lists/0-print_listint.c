#include "lists.h"

/**
* print_listint - print element of h
* @h: pointer to structure node
*
* Return: Always 0 (Success)
*/

size_t print_listint(const listint_t *h)
{
const listint_t *check = h;
size_t i = 0;
while (check)
{
i++;
printf("%d\n", check->n);
check = check->next;
}
return (i);
}

