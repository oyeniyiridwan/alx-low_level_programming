#include "lists.h"

/**
* listint_len - print total element of h
* @h: pointer to structure node
*
* Return: Always 0 (Success)
*/

size_t listint_len(const listint_t *h)
{
const listint_t *check = h;
size_t i = 0;
while (check)
{
i++;
check = check->next;
}
return (i);
}

