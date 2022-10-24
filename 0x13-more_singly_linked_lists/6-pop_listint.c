#include "lists.h"

/**
* pop_listint - print head data and delete head
* @head: pointer to structure node heaf
*
* Return: Always 0 (Success)
*/

int pop_listint(listint_t **head)
{
int result;
listint_t *check;
if (*head == NULL)
return (0);
else
{
result = (*head)->n;
check = (*head)->next;
free(*head);
*head = check;
head = NULL;
return (result);
}
}

