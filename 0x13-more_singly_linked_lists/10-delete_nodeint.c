#include "lists.h"

/**
* delete_nodeint_at_index - delete node at index
* @head: pointer to structure node head
* @index: index of the node to delete
*
* Return: Always 0 (Success)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t  *new, *current;
if (*head == NULL)
return (-1);
current = *head;
if (!index)
{
*head = current->next;
free(current);
return (1);
}
while (i < index - 1)
{
if (!current || !current->next)
return (-1);
current = current->next;
i++;
}
new = current->next->next;
free(current->next);
current->next = new;
return (1);
}

