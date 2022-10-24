#include "lists.h"

/**
* insert_nodeint_at_index - insert new node at idx
* @head: pointer to structure node head
* @idx: index of new node
* @n: data for new node
*
* Return: Always 0 (Success)
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t  *new, *current, *temp;
if (*head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
current = *head;
new->n = n;
while (i < (idx - 1))
{
if (!current)
return (NULL);
current = current->next;
i++;
}
temp = current->next;
current->next = new;
new->next = temp->next;
return (new);
}

