#include "lists.h"

/**
* sum_listint - return the sum of datas in structure
* @head: pointer to structure node head
*
* Return: Always 0 (Success)
*/

int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}

