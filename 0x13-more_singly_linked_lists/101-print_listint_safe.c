#include "lists.h"

/**
* print_listint_safe - print element of head
* @head: pointer to structure node head
*
* Return: Always 0 (Success)
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *check, *head2;
size_t i = 0;
head2 = head;
while (head2)
{
i++;
printf("[%p] %d\n", (void *)head2, head2->n);
check = head2;
head2 = head2->next;
if (check <= head2)
{
printf("[%p] %d\n", (void *)head2, head2->n);
break;
}
}
return (i);
}
