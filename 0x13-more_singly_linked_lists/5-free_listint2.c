#include "lists.h"

/**
* free_listint2 - free head
* @head: pointer to the head of the structure node
*
* Return: Always 0 (Success)
*/

void free_listint2(listint_t **head)
{
listint_t *temp, **check = head;
if (check != NULL)
{
while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*check = NULL;
}
}
