#include "lists.h"

/**
* print_listint_safe - print element of head
* @head: pointer to structure node head
*
* Return: Always 0 (Success)
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *check;
size_t i = 0;
while (head->next)
{
i++;
printf("[%p] %d\n", (void *)head, head->n);
check = head->next;
free((void *)head);
head = check;
}
free((void *)head->next);
free((void *)head);
return (i);
}

