#include "lists.h"

/**
* free_listint - free head
* @head: pointer to the head of the structure node
*
* Return: Always 0 (Success)
*/

void free_listint(listint_t *head)
{
listint_t *temp;
if (!head)
return;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
