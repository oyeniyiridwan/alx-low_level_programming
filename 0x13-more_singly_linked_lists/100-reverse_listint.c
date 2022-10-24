#include "lists.h"

/**
* reverse_listint - reverse a list
* @head: pointer to structure node
*
* Return: Always 0 (Success)
*/

listint_t *reverse_listint(listint_t **head)
{
  listint_t *prev = NULL, *forward= NULL;
  if (!head || !*head)
    return (*head);
  while(*head)
    {
      forward = (*head)->next;
      (*head)->next = prev;
      prev = *head;
      *head = forward;
    }
  *head = prev;
  return (*head);
}

